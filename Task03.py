def create_rating(students: list) -> list:
    # Копіюємо список, щоб не змінювати оригінал
    rating = students[:]
    n = len(rating)
    
    # Selection Sort (від найвищого балу до найнижчого)
    for i in range(n):
        # Знаходимо максимальний елемент у незвіданій частині
        max_idx = i
        for j in range(i + 1, n):
            if rating[j][1] > rating[max_idx][1]:
                max_idx = j
        # Міняємо місцями
        rating[i], rating[max_idx] = rating[max_idx], rating[i]
    
    return rating


# Приклад використання
if __name__ == "__main__":
    # Вхідні дані: список кортежів (ім'я, середній бал)
    students = [
        ("Іван", 85),
        ("Марія", 92),
        ("Олександр", 78),
        ("Анна", 95),
        ("Дмитро", 88),
        ("Софія", 92),
        ("Петро", 80)
    ]
    
    result = create_rating(students)
    
    print("Рейтинг студентів:")
    for i, (name, score) in enumerate(result, 1):
        print(f"{i}. {name} — {score}")
