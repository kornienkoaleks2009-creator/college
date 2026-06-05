class PhoneBook:
    def __init__(self):
        self.capacity = 8
        self.size = 0
        self.buckets = [[] for _ in range(self.capacity)]
        self.load_factor_threshold = 0.75

    def _hash(self, key: str) -> int:
        """Власна хеш-функція"""
        hash_value = 0
        for char in str(key):
            hash_value = (hash_value * 31 + ord(char)) % self.capacity
        return hash_value

    def _resize(self):
        """Автоматичне розширення таблиці (подвоєння)"""
        old_buckets = self.buckets
        self.capacity *= 2
        self.buckets = [[] for _ in range(self.capacity)]
        self.size = 0

        for bucket in old_buckets:
            for name, phone in bucket:
                self.add(name, phone)

    def add(self, name: str, phone: str):
        """Додавання або оновлення контакту"""
        if self.size / self.capacity > self.load_factor_threshold:
            self._resize()

        index = self._hash(name)
        bucket = self.buckets[index]

        # Перевіряємо, чи існує контакт
        for i, (existing_name, _) in enumerate(bucket):
            if existing_name == name:
                bucket[i] = (name, phone)  # оновлення
                return

        # Додаємо новий контакт
        bucket.append((name, phone))
        self.size += 1

    def get(self, name: str) -> str:
        """Отримання номера телефону за іменем"""
        index = self._hash(name)
        bucket = self.buckets[index]

        for existing_name, phone in bucket:
            if existing_name == name:
                return phone
        return None

    def remove(self, name: str) -> bool:
        """Видалення контакту"""
        index = self._hash(name)
        bucket = self.buckets[index]

        for i, (existing_name, _) in enumerate(bucket):
            if existing_name == name:
                bucket.pop(i)
                self.size -= 1
                return True
        return False

    def contains(self, name: str) -> bool:
        """Перевірка наявності контакту"""
        return self.get(name) is not None

    def __len__(self):
        """Повертає кількість контактів"""
        return self.size


# Приклад використання
if __name__ == "__main__":
    pb = PhoneBook()
    
    pb.add("Іван", "+380501234567")
    pb.add("Марія", "+380671234567")
    pb.add("Олександр", "+380931234567")
    pb.add("Анна", "+380991234567")
    
    print("Кількість контактів:", len(pb))
    print("Номер Марії:", pb.get("Марія"))
    print("Чи є Олександр:", pb.contains("Олександр"))
    
    pb.remove("Іван")
    print("Після видалення Івана, кількість:", len(pb))
    
    # Демонстрація оновлення
    pb.add("Марія", "+380991112233")
    print("Оновлений номер Марії:", pb.get("Марія"))
