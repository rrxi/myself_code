car = input("What car is your want? ")
print("Let me see if I can find you a " + car + '.')

print('\n')

people = input("How many people to eat? ")
people = int(people)
if people > 8:
    print("Sorry,we don't have table.")
else:
    print('We have table.')
    
print('\n')

number = input('Plase input the number:')
number = int(number)
if number % 10 == 0:
    print("此数是10的倍数。")
else:
    print("此数不是10的倍数。")
