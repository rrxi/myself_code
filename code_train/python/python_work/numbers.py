for value in range(1,5):
	print(value)

numbers = list(range(1,6))
print(numbers)

even_numbers = list(range(2,11,2))#输出偶数
print(even_numbers)

squares = []#输出1~10的平方
for value in range(1,11):
	squares.append(value**2)
print(squares)

print(min(squares))
print(max(squares))
print(sum(squares))

squares1 = [value**2 for value in range(1,11)]
print(squares1)
