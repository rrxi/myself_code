cars = ['bmw','audi','toyota','subaru']
#cars.sort()
print(cars)
print(sorted(cars))
print(cars)
cars.reverse()
print(cars)

print("\n")

for car in cars:
    if car == 'bmw':
        print(car.upper())
    else:
        print(car.title())
