class Restaurant():
    def __init__(self, restaurant_name, cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
        self.number_served = 0
    
    def describe_restaurant(self):
        print("The restaurant name is " + self.restaurant_name.title() + "."
               + "And it cuisine type is " + self.cuisine_type)
        
    def open_restaurant(self):
        print("Restaurant " + self.restaurant_name.title() + " is working.")
        
    def set_number_served(self, number):
        self.number_served = number
        
    def increment_number_served(self, number):
        self.number_served += number 
    
    def print_number_eat(self):
        print("There has " + str(self.number_served) + " people to eat.")
    
restaurant = Restaurant('dfd', 'fry')
restaurant.number_served = 10
restaurant.print_number_eat()
restaurant.set_number_served(20)
restaurant.print_number_eat()
restaurant.increment_number_served(30)
restaurant.print_number_eat() 

print('\n')

class User():
    def __init__(self, first_name, last_name):
        self.first_name = first_name
        self.last_name = last_name
        self.login_attempts = 0
    
    def describe_user(self):
        print("The user first name is " + self.first_name.title()
               + ",last name is " + self.last_name.title() + ".")
                
    def greet_user(self):
        full_name = self.first_name + self.last_name
        print("Hello," + full_name)
        
    def increment_login_attempts(self):
        self.login_attempts += 1
        
    def reset_login_attempts(self):
        self.login_attempts = 0
    
    def print_login_attempts(self):
        print("You haven login " + str(self.login_attempts) + " times.")
        
user = User('x', 'rr')
user.increment_login_attempts()
user.increment_login_attempts()
user.increment_login_attempts()
user.print_login_attempts()
user.reset_login_attempts()
user.print_login_attempts()
        

