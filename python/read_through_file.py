
fname = input("Enter file name: ")
fhand = open("./python/" + fname)
count = 0
for line in fhand:
    if count > 15:
        break
    print(line.upper())
    count += 1