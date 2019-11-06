def make_pizza(*toppings):
    print(toppings)
    
make_pizza('pepperoni')
make_pizza('mushroom', 'green peppers', 'extra cheese')

print('\n')

def make_pizza_1(*toppings):
    print('\nMaking a pizza with the following toppings:')
    for topping in toppings:
        print('- ' + topping)
make_pizza_1('pepperoni')
make_pizza_1('mushroom', 'green peppers', 'extra cheese')

print('\n')

def make_pizza_2(size, *toppings):
    print('\nMaking a ' + str(size) +
          "-inch pizza with the following toppings:")
    for topping in toppings:
        print("- " + topping)
make_pizza_2(16, 'pepperoni')
make_pizza_2(12,'mushroom', 'green peppers', 'extra cheese')
