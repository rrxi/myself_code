#牢记：对列表操作后，其下标对应的值会发生改变
vistors = ['L','XRR','W','X','Z']
print("Eat dinner with me "+vistors[0]+".")
print("Eat dinner with me "+vistors[1]+".")
print("Eat dinner with me "+vistors[2]+".")
print("Eat dinner with me "+vistors[3]+".")
print("Eat dinner with me "+vistors[4]+".")
print(len(vistors))
print("\n")

print("Sorry,I can't.From: "+vistors[0]+".")
vistors[0] = "D"
print("Eat dinner with me "+vistors[0]+".")
print("Eat dinner with me "+vistors[1]+".")
print("Eat dinner with me "+vistors[2]+".")
print("Eat dinner with me "+vistors[3]+".")
print("Eat dinner with me "+vistors[4]+".")

print("\n")

print("I find bigger table.")
vistors.insert(0,'S')
vistors.insert(4,'J')
vistors.append('Y')
print("Eat dinner with me "+vistors[0]+".")
print("Eat dinner with me "+vistors[1]+".")
print("Eat dinner with me "+vistors[2]+".")
print("Eat dinner with me "+vistors[3]+".")
print("Eat dinner with me "+vistors[4]+".")
print("Eat dinner with me "+vistors[5]+".")
print("Eat dinner with me "+vistors[6]+".")
print("Eat dinner with me "+vistors[7]+".")

print("\n")

print("Sorry,I can only take 3 people.")
pop1 = vistors.pop()
print("Sorry "+pop1)
pop2 = vistors.pop(0)
print("Sorry "+pop2)
pop3 = vistors.pop(-3)#"-"代表从右开始数，起始为１
print("Sorry "+pop3)
rm4 = "XRR"
vistors.remove("XRR")
print("Sorry "+rm4)
pop5 = vistors.pop(0)
print("Sorry "+pop5)
print("Eat dinner with me "+vistors[0]+".")
print("Eat dinner with me "+vistors[1]+".")
print("Eat dinner with me "+vistors[2]+".")

print("...")
print("Good,we have a good time.Let's go home.")


