# Chris K Samuel
# @chrisksamuel

# We Create a list called students, and after we getsome inputs from the user, we append a dictionary of key value pairs, 
# {"name": name, "dorm", dorm} to that list. 
# Here "name" and "dorm" are the keys, and we want their values to be the variables we gathered as input. Then we can later access each     
# object's valuyes with student['name'] or student['dorm'] to print them out. 
# 



# Demonstrates file I/O


# Use only if we are in the sandbox for cs50
import csv
from cs50 import get_string

# We can create our own data structures, objects:
# Space for students
students = []

# Prompt for students' names and dorms
for i in range(3):
    name = get_string("name: ")
    dorm = get_string("dorm: ")
    students.append({"name": name, "dorm": dorm})

# Print students' anmes and dorms
for student in students:
    print(f"{student['name']} is in {student['dorm']}.")

