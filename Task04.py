def validate_brackets(code: str) -> bool:
    stack = []
    brackets = {')': '(', ']': '[', '}': '{'}
    
    for char in code:
        if char in '([{' :
            stack.append(char)
        elif char in ')]}':
            if not stack:
                return False
            top = stack.pop()
            if top != brackets[char]:
                return False
    
    return len(stack) == 0


# Приклад використання
if __name__ == "__main__":
    test_codes = [
        "if (x > 0) { return [1, 2, 3]; }",
        "function test() { return [1, (2 + 3)]; }",
        "({[}])",
        "((()))",
        "([)]",
        "abc(def[ghi]{jkl})mno",
        "(((",
        ")))"
    ]
    
    for i, code in enumerate(test_codes, 1):
        result = validate_brackets(code)
        print(f"Приклад {i}: {code}")
        print(f"Результат: {'Коректно' if result else 'Некоректно'}\n")
