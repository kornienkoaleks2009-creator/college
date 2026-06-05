def merge_orders(web_orders: list, app_orders: list) -> list:
    """
    Злиття двох відсортованих за часом створення списків замовлень.
    Складність: O(n + m)
    """
    result = []
    i = 0  # індекс для web_orders
    j = 0  # індекс для app_orders
    
    while i < len(web_orders) and j < len(app_orders):
        if web_orders[i][0] <= app_orders[j][0]:  # порівнюємо час створення
            result.append(web_orders[i])
            i += 1
        else:
            result.append(app_orders[j])
            j += 1
    
    # Додаємо залишок з web_orders
    while i < len(web_orders):
        result.append(web_orders[i])
        i += 1
    
    # Додаємо залишок з app_orders
    while j < len(app_orders):
        result.append(app_orders[j])
        j += 1
    
    return result


# Приклад використання
if __name__ == "__main__":
    # Формат: (час_створення, id_замовлення, інша_інформація)
    web_orders = [
        (10, "W001", "Замовлення з сайту"),
        (15, "W002", "Замовлення з сайту"),
        (25, "W003", "Замовлення з сайту"),
        (40, "W004", "Замовлення з сайту")
    ]
    
    app_orders = [
        (5, "A001", "Замовлення з додатку"),
        (12, "A002", "Замовлення з додатку"),
        (20, "A003", "Замовлення з додатку"),
        (30, "A004", "Замовлення з додатку"),
        (35, "A005", "Замовлення з додатку")
    ]
    
    merged = merge_orders(web_orders, app_orders)
    
    print("Об'єднаний хронологічний список замовлень:")
    for order in merged:
        print(order)
