import matplotlib.pyplot as plt

input_values = [1, 2, 3, 4, 5]
cubes = [1, 8, 27, 64, 125]
plt.plot(input_values, cubes, linewidth=5)

plt.title("Cubes Numbers", fontsize=20)
plt.xlabel("Value", fontsize=10)
plt.ylabel("Cube of Value", fontsize=10)
plt.tick_params(axis='both', labelsize=14)

plt.show()

x_values = list(range(1, 5001))
y_values = [x**3 for x in x_values]
plt.scatter(x_values, y_values, c=y_values, cmap=plt.cm.PuRd, edgecolor='none', s=40)

plt.title("Cubes Numbers", fontsize=20)
plt.xlabel("Value", fontsize=10)
plt.ylabel("Cube of Value", fontsize=10)
plt.tick_params(axis='both', which='major', labelsize=14)
plt.axes([0, 5100, 0, 12600000])

plt.show()


