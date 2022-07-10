# TODO
from cs50 import get_int, get_string

Number = get_string("Number: ")
# Reversing the order
copy_Number = Number[::-1]
# selecting alternate no.s with second last number, multiplying by 2 and correcting double digit numbers.
uptil_second_last = sum([(int(x) * 2) // 10 + ((int(x) * 2) % 10) for x in copy_Number[1::2]])
# selecting rest of the numbers and adding them
rest_numbers = sum([int(y) for y in copy_Number[0::2]])
# adding all the numbers
sum = (uptil_second_last + rest_numbers)

if sum % 10 == 0:
    if len(Number) == 15 and Number[0:2] in ['34', '37']:
        print("AMEX")
    elif len(Number) == 16 and Number[0:2] in ['51', '52', '53', '54', '55']:
        print("MASTERCARD")
    elif len(Number) in [13, 16] and Number[0] == '4':
        print("VISA")
else:
    print("INVALID")