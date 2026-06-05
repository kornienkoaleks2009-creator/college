class Deque:
    def __init__(self):
        self.items = []
    
    def add_front(self, item):
        self.items.insert(0, item)
    
    def add_rear(self, item):
        self.items.append(item)
    
    def remove_front(self):
        if not self.is_empty():
            return self.items.pop(0)
        return None
    
    def remove_rear(self):
        if not self.is_empty():
            return self.items.pop()
        return None
    
    def is_empty(self):
        return len(self.items) == 0


def is_palindrome(phrase: str) -> bool:
    """Перевірка, чи є фраза паліндромом (ігноруючи пробіли, розділові знаки та регістр)"""
    deque = Deque()
    
    # Підготовка: залишаємо тільки літери та переводимо в нижній регістр
    cleaned = ''.join(char.lower() for char in phrase if char.isalnum())
    
    # Додаємо всі символи в чергу ззаду
    for char in cleaned:
        deque.add_rear(char)
    
    # Порівнюємо символи з обох кінців
    while not deque.is_empty():
        front = deque.remove_front()
        rear = deque.remove_rear()
        
        if front != rear:
            return False
    
    return True


# Приклад використання
if __name__ == "__main__":
    test_phrases = [
        "Кіт на лаві, а віл на тіку",
        "Тепер перти, брат, репти",
        "Лідер, я реділ",
        "Сіно носи",
        "Робот тобор",
        "Аби баба",
        "Ніс у суні",
        "Місяць сяйми",
        "Ене, мене, му",
        "Це не паліндром"
    ]
    
    for phrase in test_phrases:
        result = is_palindrome(phrase)
        print(f'"{phrase}" -> {"Паліндром" if result else "Не паліндром"}')
