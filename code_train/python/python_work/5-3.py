alien_color = 'red'
if alien_color  == 'green':
    print("You got 5 pionts.")
else:
    print("Game over.")

print("\n")

alien_color = 'red'
if alien_color == 'green':
    print("You got 5 pionts.")
elif alien_color == 'yellow':
    print("You got 10 points.")
else:
    print("You got 15 points.")
    
print("\n")

age = 22
if age < 2 :
    print("Hello,baby")
elif age < 4:
    print("you can go")
elif age < 13:
    print("you are children")
elif age < 20:
    print("you are younger")
elif age < 65:
    print("you are group")
else :
    print("you are old")
    
print("\n")

favorite_fruits = ['waterlemon','mango','strawburry']
if 'waterlemon' in favorite_fruits:
    print("You really like waterlemon.")
if 'mango' in favorite_fruits:
    print("You really like mango.")
if 'strawburry' in favorite_fruits:
    print("You really like strawburry.")
if 'banban' not in favorite_fruits:
    print("Oh,you don't like banan.")
