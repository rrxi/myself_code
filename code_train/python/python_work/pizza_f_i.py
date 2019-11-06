def make_pizza(size, *toppings):
    print('\nMaking a ' + srt(size) + 
          "-inch pizza with the following toppings:")
    for topping in toppings:
        print("- " + topping)
