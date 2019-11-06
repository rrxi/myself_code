from collections import OrderedDict
river_country = OrderedDict()
river_country['A'] = 'z'
river_country['B'] = 'y'
river_country['C'] = 'x'
for r,c in river_country.items():
    print("The " + r +" runs through " + c + '.')
for r in river_country.keys():
    print(r)
for c in sorted(river_country.values()):
    print(c)

print('\n')

from random import randint
class Die():
    def __init__(self, sides=6):
        self.sides = sides
        
    def roll_die(self):
        i = 1
        while i <= 10:
            x = randint(1,self.sides)
            print(str(x))
            i += 1
     
die = Die()
die.roll_die()
print('\n')
die = Die(10)
die.roll_die()
print('\n')
die = Die(20)
die.roll_die()


