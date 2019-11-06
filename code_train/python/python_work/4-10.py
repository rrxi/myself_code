words = ['A','B','C','D','E','F','G']
print("The first three items in the list are: ")
print(words[:3])
print("Thress items from the middle of the list are: ")
print(words[2:-2])
print("The last three items in the list are: ")
print(words[4:])

print("\n")

pizzas = ['only cheese','fruit','chicken']
friend_pizzas = pizzas[:]
pizzas.append("seafood")
friend_pizzas.append("shrimp")
print("My favorite pizzas are:")
for pizza in pizzas:
	print(pizza)
print("My friend's favorite pizzas are:")
for fpizza in friend_pizzas:
	print(fpizza)
