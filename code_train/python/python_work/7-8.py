sandwich_orders = ['chicken','fish','cheese']
finished_sandwiches = [ ]
for sandwich in sandwich_orders:
    print("I made your " + sandwich + " sandwich.")
    finished_sandwiches.append(sandwich)
print(finished_sandwiches)

print('\n')

sandwich_orders = ['pastrami','chicken','pastrami','fish','pastrami','cheese']
print("We don't have pastrami.")
while 'pastrami' in sandwich_orders:
    sandwich_orders.remove('pastrami')
print(sandwich_orders)
    
print('\n')

dream_places = { }
active = True
while active:
    name =  input("What's your name?")
    place = input("If you could visit one place in the world, where would you go?")
    dream_places[name] = place
    repeat = input("would you like to let another person respond? (yes/no)")
    if repeat == 'no':
        active = False
print('\n---Poll Results---')
for name,place in dream_places.items():
    print(name.title() + " dream place is " + place + ".")
