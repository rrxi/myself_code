class Restaurant():
    def __init__(self, restaurant_name, cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
    
    def describe_restaurant(self):
        print("The restaurant name is " + self.restaurant_name.title() + "."
               + "And it cuisine type is " + self.cuisine_type)
        
    def open_restaurant(self):
        print("Restaurant " + self.restaurant_name.title() + " is working.")
        
restaurant = Restaurant('ahfnf', 'fry')
restaurant.describe_restaurant()
restaurant.open_restaurant()

print('\n')

class User():
    def __init__(self, first_name, last_name):
        self.first_name = first_name
        self.last_name = last_name
    
    def describe_user(self):
        print("The user first name is " + self.first_name.title()
               + ",last name is " + self.last_name.title() + ".")
                
    def greet_user(self):
        full_name = self.first_name + self.last_name
        print("Hello," + full_name)
        
user = User('x', 'rr')
user.describe_user()
user.greet_user()




