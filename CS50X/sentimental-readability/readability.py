# TODO
from cs50 import get_string

# getting input
text = get_string("Text: ")
letters, words, sentences = 0, 1, 0
# counting letters
for i in range(len(text)):
    if text[i].isalpha():
        letters += 1

# counting words
for j in range(len(text)):
    if text[j] == " ":
        words += 1

# counting sentences
for k in range(len(text)):
    if text[k] == "." or text[k] == "?" or text[k] == "!":
        sentences += 1

# using index formula
L = (letters / words) * 100
S = (sentences / words) * 100

grade = round(0.0588 * L - 0.296 * S - 15.8)
# printing result
if grade < 1:
    print("Before Grade 1")
elif grade > 16:
    print("Grade 16+")
else:
    print("Grade " + str(grade))