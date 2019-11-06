class Restaurant():
    def __init__(self, restaurant_name, cuisine_type):
        self.restaurant_name = restaurant_name
        self.cuisine_type = cuisine_type
        self.number_served = 0
    
    def describe_restaurant(self):
        print("The restaurant name is " + self.restaurant_name.title() + "."
               + "And it cuisine type is " + self.cuisine_type + ".")
        
    def open_restaurant(self):
        print("Restaurant " + self.restaurant_name.title() + " is working.")
        
    def set_number_served(self, number):
        self.number_served = number
        
    def increment_number_served(self, number):
        self.number_served += number 
    
    def print_number_eat(self):
        print("There has " + str(self.number_served) + " people to eat.")
        
class IceCreamStand(Restaurant):
    def __init__(self, restaurant_name, cuisine_type):
        super().__init__(restaurant_name, cuisine_type)
        self.flavors  = ['milk', 'fruit', 'cheese']
    def describe_flavors(self):
        print("We have these flavors:")
        for flavor in self.flavors:
            print('\t' + flavor)

icecreamstand = IceCreamStand('IceKing', 'cold drink')
icecreamstand.describe_flavors()
icecreamstand.describe_restaurant()
