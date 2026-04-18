my_dict = dict()
my_file = open("./python/mbox.txt")
for line in my_file:
    if line.startswith("From"):
        words = line.split()
        if words[1] not in my_dict:
            my_dict[words[1]] = 1
        else:
            my_dict[words[1]] += 1
print(my_dict)