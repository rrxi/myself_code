class Employee():
    def __init__(self, first_name, second_name, salary):
        self.first_name = first_name
        self.second_name = second_name
        self.salary = salary
        
    def give_raise(self, raisement=5000):
        self.salary += raisement
        return self.salary
        
    def print_salary(self):
        print(str(self.salary))
    
# employee = Employee('x', 'rr', 4500)
# employee.give_raise()
# employee.print_salary()
# employee.give_raise(10000)
# employee.print_salary()

        
