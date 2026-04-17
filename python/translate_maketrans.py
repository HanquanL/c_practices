import string

text = "hello world!"

print(text.translate(text.maketrans("h", "b", string.punctuation)))
