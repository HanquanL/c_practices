open_file = open("romeo.txt")
words_list = []
for line in open_file:
    for word in line.split(" "):
        if word in words_list:
            continue
        else:
            words_list.append(word.replace("\n", ""))
print(words_list)