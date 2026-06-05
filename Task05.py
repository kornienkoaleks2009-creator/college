import time


def climb_recursive(n: int) -> int:
    """Рекурсивний підхід (експоненціальна складність)"""
    if n == 0:
        return 1
    if n == 1:
        return 1
    return climb_recursive(n - 1) + climb_recursive(n - 2)


def climb_iterative(n: int) -> int:
    """Ітеративний підхід (лінійна складність)"""
    if n == 0 or n == 1:
        return 1
    
    a, b = 1, 1
    for _ in range(2, n + 1):
        a, b = b, a + b
    return b


# Порівняння продуктивності
if __name__ == "__main__":
    values = [10, 20, 30, 35]
    
    print("Порівняння рекурсивного та ітеративного підходів\n")
    
    for n in values:
        print(f"n = {n}")
        
        # Рекурсивний
        start = time.time()
        rec_result = climb_recursive(n)
        rec_time = time.time() - start
        
        # Ітеративний
        start = time.time()
        iter_result = climb_iterative(n)
        iter_time = time.time() - start
        
        print(f"   Кількість способів: {rec_result}")
        print(f"   Рекурсивний час: {rec_time:.6f} сек")
        print(f"   Ітеративний час: {iter_time:.6f} сек")
        print("-" * 50)
    
    print("\nВисновок:")
    print("Рекурсивний метод має експоненціальну складність O(2^n),")
    print("тому для більших n час виконання зростає дуже швидко.")
    print("Ітеративний метод має лінійну складність O(n) і працює значно швидше.")
