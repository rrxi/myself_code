filename = 'guest.txt'
with open(filename, 'w') as file_object:
    username = input("Please input your name:")
    file_object.write(username + '\n')

print('\n')

filename = 'guest_book.txt'
prompt = 'Please input your name:'
prompt += "\n(Enter 'quit' to quit): "
active = True
while active:
    username = input(prompt)
    if username != 'quit':
        with open(filename, 'a') as file_object:
            file_object.write(username + '\n')
            print("Hello," + username)
    else:
        active = False
   
print('\n')

filename = 'answer_reason.txt'
prompt = 'Please input you like profram reason:'
prompt += "\n(Enter 'quit' to quit): "
active = True
while active:
    reason = input(prompt)
    if reason != 'quit':
        with open(filename, 'a') as file_object:
            file_object.write(reason + '\n')
    else:
        active = False

        
        
