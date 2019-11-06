import unittest
from Employee import Employee

class TestEmployee(unittest.TestCase):
    '''针对Employee类的测试'''
    
    def setUp(self):
        self.employee = Employee('x', 'rr', 4500)
        
    def test_give_default_raise(self):
        self.employee.give_raise()
        self.assertEqual(self.employee.salary, 9500)
        
    def test_give_custom_raise(self):
        self.employee.give_raise(10000)
        self.assertEqual(self.employee.salary, 14500)
        
unittest.main()
    
