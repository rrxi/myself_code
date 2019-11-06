request_toppings = ['mushroom','green peppers','extra cheese']
for request_topping in request_toppings:
    print("Adding " + request_topping + ".")
print("\nFinished making your pizza.")

print("\n")

for request_topping in request_toppings:
    if request_topping == 'green peppers':
        print("Sorry,we are out of green peppers ringh now.")
    else:
        print("Adding " + request_topping + '.')
print("\nFinished making your pizza.")
