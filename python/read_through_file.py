
fhand = open("./python/mbox.txt")
count = 0
for line in fhand:
    if count > 15:
        break
    print(line.upper())
    count += 1