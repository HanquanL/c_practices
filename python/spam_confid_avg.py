fname = input("Enter file name: ")
fhand = open("./python/" + fname)
spam_total = 0
spam_count = 0
for line in fhand:
    if line.startswith("X-DSPAM-Confidence:"):
        spam_count += 1
        int_pos = line.find(" ")
        spam_confid = float(line[int_pos + 1 : -1])
        spam_total += spam_confid
print("Average spam confidence: %f" % (spam_total / spam_count))