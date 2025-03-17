# Syntax Error: Use of an undefined variable 'o' instead of '0' in 'total = o'
def calculate_sum(arr):
    total = o  # 'o' is not defined, should be '0'
    for num in arr:
        total += num
    return total

numbers = [1, 2, 3, 4, 5]
result = calculate_sum(numbers)
print("Sum in Python:", result)