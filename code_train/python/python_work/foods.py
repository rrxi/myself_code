my_foods = ['pizza','falafel','carrot cake']

friend_foods = my_foods[:] #存放为副本，两者指向不同的列表，只是列表内容在此时相同
my_foods.append('cannoli')
friend_foods.append('ice cream')
print("My favorite foods are:")
for my_food in my_foods:
	print(my_food)
print("\nMy friend's foods are:")
print(friend_foods)

print("\n\n")

friend_foods1 = my_foods #两者指向同一个列表
my_foods.append('cannoli')
friend_foods1.append('ice cream')
print("My favorite foods are:")
print(my_foods)
print("\nMy friend1's foods are:")
print(friend_foods1)
