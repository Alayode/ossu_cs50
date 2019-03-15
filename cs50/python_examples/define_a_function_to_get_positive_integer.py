# n is a variable that can be passed into cough, which we can also pass into 
# range, And notice that we don't specify types in Python, so n can be of any
# data type ( and can even be assigned to have a value of another type )


# We can define a function to get a positive integer


from cs50 import get_int

def main():
    i = get_positive_int("Positive integer: ")
    print(i)

def get_positive_int(prompt):
     while True:
            n = get_int(prompt)
            if n > 0:
                break
            return n

main()
