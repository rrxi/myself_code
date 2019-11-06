name = input("Please enter your name: ")
print("Hello," + name + '!')

prompt = 'if you tell us who you are,we van personablize the message you see.'
prompt  += '\nWhat is your first name？'
name = input(prompt)
print('\nHello, ' + name + '!')

def gree_user(username):
    print("Hello!" + username.title())
    
gree_user('xrr')
