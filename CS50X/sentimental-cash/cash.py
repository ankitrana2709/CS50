# TODO
from cs50 import get_float

# Ask how many Dollars the customer is owed
while True:

    dollars = get_float("Dollars owed: ")
    if dollars >= 0:
        break
# finding out cents
cents = round(dollars * 100)
coins = 0

# taking out quarters
while cents >= 25:
    cents -= 25
    coins += 1

# taking out dimes
while cents >= 10:
    cents -= 10
    coins += 1

# taking out nickels
while cents >= 5:
    cents -= 5
    coins += 1

# taking out pennies
while cents >= 1:
    cents -= 1
    coins += 1

print(coins)
