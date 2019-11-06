for number in range(1,21):
	print(number)

print("\n")

'''
numbers = list(range(1,1000001))
for number in numbers:
	print(number)

print("\n")

print(min(numbers))
print(max(numbers))
print(sum(numbers))
'''

odd_numbers = list(range(1,20,2))
for odd_number in odd_numbers:
	print(odd_number)
	
print("\n")

multiple3 = []
for value in range(1,11):
	nu = value * 3
	multiple3.append(nu)
	print(nu)
print(multiple3)

print("\n")

cubes = [value**3 for value in range(1,11)]
for cube in cubes:
	print(cube)
