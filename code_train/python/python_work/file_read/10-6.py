print("Give me two numbers, and I'll add them.")
print("Enter 'q' to quit.")
while True:
    first_number = input('\nFirst number:')
    if first_number == 'q':
        break
    second_number = input('\nSecond number:')
    if second_number == 'q':
        break
    try:
        answer = int(first_number) + int(second_number)
    except ValueError:
        print("Please input number!")
    else:
        print(answer)
        
print('\n')

filename_1 = 'dogs.txt'
filename_2 = 'cats.txt'
try:
    with open(filename_1) as f_obj_1:
        contents = f_obj_1.read()
        print(contents.rstrip())
except FileNotFoundError:
    pass
print('\n')
try:    
    with open(filename_2) as f_obj_2:
        contents = f_obj_2.read()
        print(contents.rstrip())
except FileNotFoundError:
    msg = "Sorry, the file '" + filename_2 + "' does not exist."
    print(msg)

print('\n')

def count_words(filename):
    try:
        with open(filename) as f_obj:
            contents = f_obj.read()
    except FileNotFoundError:
        msg = "Sorry, the file '" + filename + "' does not exist."
        print(msg) 
    else:
        words = contents.lower().count('the')
        print("The file " + filename + " has about " + str(words) + 
            ' words.')    
            
filenames = ['alice.txt', 'siddhartha.txt', 'moby_dick.txt', 'little_women.txt']
for filename in filenames:
    count_words(filename)
