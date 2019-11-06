import pygal
from die import Die

#创建骰子
die_1 = Die()
die_2 = Die()

#掷骰子，存结果
results = []
for roll_num in range(5000):
    result = die_1.roll() * die_2.roll()
    results.append(result)
    
#分析结果
frequencies = []
max_result = die_1.num_sides * die_2.num_sides
for value in range(1, max_result+1):
    frequency = results.count(value)
    frequencies.append(frequency)
    
#结果可视化
hist = pygal.Bar()
hist.title = "Results of rolling two D6 5000 times."
hist.x_labels = []
for label in range(1, max_result+1):
    hist.x_labels.append(label)
hist.x_title = "Result"
hist.y_title = "Frequency of Result"

hist.add('D6 * D6', frequencies)
hist.render_to_file('mult_dice_visual.svg')


