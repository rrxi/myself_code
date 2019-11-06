import unittest
from city_function import city_functions

class CityTestCase(unittest.TestCase):
    '''测试city_function.py'''
    def test_city_country(self):
        city_country = city_functions('santiago', 'chile')
        self.assertEqual(city_country, 'Santiago, Chile')
    
    def test_city_country_population(self):
        city_country_population = city_functions('santiago', 'chile', 5000)
        self.assertEqual(city_country_population, 'Santiago, Chile - population 5000')
        
unittest.main()


