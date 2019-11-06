alien_0  = {'color': 'green','points': 5}
print(alien_0['color'])
print(alien_0['points'])

print('\n')

new_points = alien_0['points']
print("you just earned "+str(new_points) + " points!")

print('\n')

alien_0['x_position'] = 0
alien_0['y_position'] = 25
print(alien_0)

print('\n')

print("The alien is " + alien_0['color'] + ".")
alien_0['color'] = 'yellow'
print("The alien now is " + alien_0['color'] + ".")

print('\n')

alien_0['speed']  = 'fast'
print("Original x-position: " + str(alien_0['x_position']))
if alien_0['speed'] == 'slow':
    x_increment = 1
elif alien_0['speed'] == 'medium':
    x_increment = 2
else:
    x_increment = 3

alien_0['x_position'] = alien_0['x_position'] + x_increment
print("New x-position: " + str(alien_0['x_position']))

print("\n")

del alien_0['points']
print(alien_0)

