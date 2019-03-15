# Chris Samuel
# @chrisksamuel

#
#
#
#
#

from cs50 import get_string

# Space for students
students = []

# Prompt for students' names and dorms
for i in range(3):
    name = get_string("name: ")
    dorm = get_string("dorm: ")
    students.append({"name": name, "dorm": dorm})

# Print students' name and dorms
for students in students:
    print(f"{student['name']} is in {student['dorm']}.")
