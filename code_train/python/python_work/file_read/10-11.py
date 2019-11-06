import json

filename = 'user.json'


try:
    with open(filename) as f_obj:
        username = json.load(f_obj)
except FileNotFoundError:
    username = input("What is your name? ")
    with open(filename, 'w') as f_obj:
        json.dump(username, f_obj)
else:
    print("I know your favorite number! It's " + username + ".")
    
    
    
