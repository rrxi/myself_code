def describe_pet(animal_type, pet_name):
    '''显示宠物的信息'''
    print('\nI have a ' + animal_type + ".")
    print("My " + animal_type + "'s name is " + pet_name.title() + ".")
describe_pet('hamster', 'harry')
describe_pet('dog','willie')

describe_pet(pet_name='ss',animal_type='cat')

def describe_pets(pet_name='aa',animal_type='dog'):#如果只有一个默认值，它要放在形参列表的最后位置
    '''显示宠物的信息'''
    print('\nI have a ' + animal_type + ".")
    print("My " + animal_type + "'s name is " + pet_name.title() + ".")
describe_pets(pet_name='cc')
describe_pets()
