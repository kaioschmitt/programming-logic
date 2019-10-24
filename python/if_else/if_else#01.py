st_number = input('Insert the first number: ')
nd_number = input('Insert the second number: ')

if st_number > nd_number:
    print(f"{st_number} is greater than {nd_number}")
elif st_number < nd_number:
    print(f"{st_number} is less than {nd_number}")
else:
    print('The numbers are equals')
