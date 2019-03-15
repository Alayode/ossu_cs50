from cs50 import get_int


x = get_int("x: ")
y = get_int("y: ")


print(f"x + y = {x + y}") # addition
print(f"x - y = {x - y}") # subtraction
print(f"x * y = {x * y}") # multiplication
print(f"x / y = {x / y}") # division
print(f"x / y = {x // y}") # Division | Which keeps the old behavior of always returning a truncated integer
print(f"x mod y = {x % y}") # Modulo
