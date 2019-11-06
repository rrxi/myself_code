bicycles = ['trek','cannondale','redline','specialized']
bicycles.insert(0,'ducati') #插入
print(bicycles) #会直接输出bicycles的原始形式，包括[],''
del bicycles[0]
print(bicycles)
print(bicycles[0].title())
print(bicycles[-1].title()) #”－１“可以返回列表中的最后一个元素，“－”代表从列表尾部选择元素

print("\n")

motorcycles = ['honda','yamaha','suzuki']
print(motorcycles)

popped_motorcycles = motorcycles.pop()
print(motorcycles)
print(popped_motorcycles)
