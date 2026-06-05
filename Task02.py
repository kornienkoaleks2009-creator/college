def search_dictionary(dictionary: list, word: str) -> str:
    left = 0
    right = len(dictionary) - 1
    
    while left <= right:
        mid = (left + right) // 2
        current_word = dictionary[mid][0]
        
        if current_word == word:
            return dictionary[mid][1]
        elif current_word < word:
            left = mid + 1
        else:
            right = mid - 1
    
    return "Слово не знайдено"


# Приклад використання
if __name__ == "__main__":
    # Відсортований словник: список кортежів (слово, визначення)
    dictionary = [
        ("автомобіль", "транспортний засіб з двигуном"),
        ("будинок", "споруда для проживання людей"),
        ("дерево", "багаторічна рослина"),
        ("книга", "друковане видання"),
        ("комп'ютер", "електронний пристрій для обробки даних"),
        ("мова", "система комунікації"),
        ("телефон", "пристрій для зв'язку")
    ]
    
    target = input("Введіть слово для пошуку: ").strip().lower()
    
    result = search_dictionary(dictionary, target)
    print(result)
