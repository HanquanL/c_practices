my_dict = dict()
my_file = open("./python/mbox.txt")
for line in my_file:
    if line.startswith("From") and len(line.split()) > 2:
        words = line.split()
        if words[2] not in my_dict:
            my_dict[words[2]] = 1
        else:
            my_dict[words[2]] += 1
print(my_dict)