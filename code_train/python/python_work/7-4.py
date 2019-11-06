#7-4
prompt = 'please input pizza burden:'
prompt += "\nEnter 'quit' will end."
active = True
while active:
    burden = input(prompt)
    if burden != 'quit':
        print("We will add this burden " + burden + ".")
        continue
    else:
        active = False
        
print('\n')

#7-5
prompt = 'please input your age:'

while True :
    age = input(prompt)
    age = int(age)
    if age < 0:
        break
    elif age < 3:
        print('free')
    elif age <=12:
        print('$10')
    else:
        print("$15")
        

