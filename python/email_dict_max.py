my_dict = dict()
max_email = None
my_file = open("./python/mbox.txt")
for line in my_file:
    if line.startswith("From"):
        words = line.split()
        if words[1] not in my_dict:
            my_dict[words[1]] = 1
        else:
            my_dict[words[1]] += 1
for email in my_dict:
    if max_email == None or my_dict[email] > my_dict[max_email]:
        max_email = email

print(max_email, my_dict[max_email])