def make_sandwhich(*toppings):
    print('\nMaking a sandwhich with following toppings:')
    for topping in toppings:
        print('- ' + topping)

make_sandwhich('chicken')
make_sandwhich('cheese','fish')
make_sandwhich('chicken', 'fish', 'cheese')

print('\n')

def make_car(maker, model, **other_info):
    car_info = {}
    car_info['maker'] = maker
    car_info['model'] = model
    for key, value in other_info.items():
        car_info[key] = value
    return car_info
    
car = make_car('subra', 'outback', color='blue', tow_package=True)
print(car)
