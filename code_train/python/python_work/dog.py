class Dog():
    def __init__(self, name, age):
        """初始化属性name和age"""
        self.name = name
        self.age = age
        
    def sit(self):
        '''模拟蹲下'''
        print(self.name.title() + " is now sitting.")
        
    def roll_over(self):
        '''模拟打滚'''
        print(self.name.title() + " rolled over!")

my_dog = Dog('willie', 6)
your_dog = Dog('lucy', 3)
print("My dog's name is " + my_dog.name.title() + '.')
print("My dog is " + str(my_dog.age) + " years old.")
my_dog.sit()
my_dog.roll_over()

print("\nYour dog's name is " + your_dog.name.title() + '.')
print("Your dog is " + str(your_dog.age) + " years old.")
your_dog.sit()
