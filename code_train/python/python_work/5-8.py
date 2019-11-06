usrs = ['a','b','c','d','e']
for usr in usrs:
    if usr == 'a':
        print('Hello,a,would you like to see a status report?')
    else :
        print('Hell ' + usr + 'thank you for loggin in again.')
        
print('\n')

usrs_1 = []
if usrs_1:
    print('not null')
else:
    print("we need to find some users!")
    
print("\n")

current_users = ['a','b','c','d','e']
new_users = ['f','C','g','D','z']
for new_user in new_users:
    if new_user.lower() in current_users:
        print("please input other username.")
    else :
        print("this name is ok.")
        
print('\n')

numbers = [1,2,3,4,5,6,7,8,9]
for number in numbers:
    if number == 1:
        print(str(number)+'st')
    elif number == 2:
        print(str(number)+'nd')
    elif number == 3:
        print(str(number)+'rd')
    else:
        print(str(number)+'th')
