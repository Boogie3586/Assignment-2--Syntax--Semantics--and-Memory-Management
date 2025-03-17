def outer_function():
    x = 10
    def inner_function():
        return x  # x is captured by the closure
    return inner_function

closure = outer_function()
print(closure())  # Output: 10