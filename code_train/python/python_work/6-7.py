people1 = {'first_name': 'X','last_name': 'RR','age': 22,'city': 'SH'}
people2 = {'first_name': 'A','last_name': 'bc','age': 23,'city': 'BJ'}
people3 = {'first_name': 'Z','last_name': 'xy','age': 24,'city': 'NJ'}
peoples = [people1,people2,people3]
for people in peoples:
    print(people)
     
print('\n')

A = {
    'name': 'A',
    'kind': 'dog',
    'owner': 'Z',
    }
B = {
    'name': 'B',
    'kind': 'cat',
    'owner': 'X',
    }
C = {
    'name': 'C',
    'kind': 'fish',
    'owner': 'Y',
    }
pets = [A,B,C]
for pet in pets:
    print(pet['name'] + " is a " + pet['kind'] + ".It owner is " + pet['owner']
    + ".")
    
print('\n')

favorite_places = {
    'A': ['NJ','XA','SH'],
    'B': ['BJ','XA','GZ'],
    'C': ['SZ','XM','SH'],
    }
for name,places in favorite_places.items():
    print(name.title() + " like places are:")
    for place in places:
        print('\t' + place)

print('\n')

cities = {
    'SH': {
        'country': 'China',
        'population': 15000000,
        'fact': '繁华'
        },
    'New York': {
        'country': 'USA',
        'population': 10000000,
        'fact': '时尚'
        },
    }
for city,city_info in cities.items():
    country = city_info['country']
    population = str(city_info['population'])
    fact = city_info['fact']
    print(city + " is own " + country + ",it have " + population 
    + " people,and it is " + fact + ".")
    
