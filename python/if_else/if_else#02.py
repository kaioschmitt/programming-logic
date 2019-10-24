st_number = input('Insert the first number: ')
nd_number = input('Insert the second number: ')
modulus_test = int(st_number) + int(nd_number)

if modulus_test % 2 == 0:
    print(f"The number {modulus_test} is even")
else:
    print(f"The number {modulus_test} is odd")
