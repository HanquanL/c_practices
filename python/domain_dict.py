my_dict = dict()
my_file = open("./python/mbox.txt")
for line in my_file:
    if line.startswith("From"):
        atpos = line.find("@")
        sppos = line.find(" ", atpos)
        domain_name = line[atpos + 1:sppos]
        if domain_name not in my_dict:
            my_dict[domain_name] = 1
        else:
            my_dict[domain_name] += 1
print(my_dict)