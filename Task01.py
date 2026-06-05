def find_product(products: list, target: str) -> int:
    for i in range(len(products)):
        if products[i] == target:
            return i + 1  # індексація з 1
    return -1


# Приклад використання
if __name__ == "__main__":
    # Вхідні дані
    products = ["Ноутбук", "Смартфон", "Планшет", "Навушники", "Мишка"]
    target = input("Введіть назву товару для пошуку: ").strip()
    
    result = find_product(products, target)
    
    if result != -1:
        print(result)
    else:
        print("Товар не знайдено")
