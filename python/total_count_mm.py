total = 0
count = 0
max = None
min = None
User_input = 0
while True:
    User_input = input("Enter a number: ")
    if User_input == "done":
        break
    try:
        current_input = int(User_input)
        total += current_input
        count += 1
        if max is None or current_input > max:
            max = current_input
        if min is None or current_input < min:
            min = current_input
    except ValueError:
        print("Invalid input")
print(total, count, max, min)