total = 0
count = 0
User_input = 0
while True:
    User_input = input("Enter a number: ")
    if User_input == "done":
        break
    try:
        total += int(User_input)
        count += 1
    except ValueError:
        print("Invalid input")
print(total, count, total / count)
