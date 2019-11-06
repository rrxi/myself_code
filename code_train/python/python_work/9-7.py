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
        
class Admin(User):
    def __init__(self, first_name, last_name):
        super().__init__(first_name, last_name)
        self.privileges = ['can add post', 'can delete post', 'can ban user']
    def show_privileges(self):
        print("Admin have these privileges:")
        for privilege in self.privileges:
            print("\t" + privilege)

admin = Admin('x','rr')
admin.show_privileges()

print('\n')

class Privileges():
    def __init__(self, privileges):
        self.privileges = ['can add post', 'can delete post', 'can ban user']
    def show_privileges(self):
        print("Admin have these privileges:")
        for privilege in self.privileges:
            print("\t" + privilege)
            
class Admin_1(User):
    def __init__(self, first_name, last_name):
        super().__init__(first_name, last_name)
        self.privileges = Privileges()

admin_1 = Admin_1('x','rr')
admin_1.privileges.show_privileges()
