import requests
import pygal
from pygal.style import LightColorizedStyle as LCS, LightenStyle as LS
#执行API调用并存储响应
url = 'https://api.github.com/search/repositories?q=language:python&sort=stars'
r = requests.get(url) #r为响应对象
print("Status code:", r.status_code)

#将API响应存储在一个变量中,json()将这些信息转换为一个Python字典
response_dict = r.json()
print("Total repositories:", response_dict['total_count'])

#处理结果
print(response_dict.keys())

#探索有关仓库的信息
repo_dicts = response_dict['items'] #返回一个列表
print("Repositories returned:", len(repo_dicts))

#研究第一个仓库
#repo_dict = repo_dicts[0]
# print("\nKeys:", len(repo_dict))
# for key in sorted(repo_dict.keys()):
    # print(key)✨🍰✨
# print('\nSelected information about first repository:')
# print('Name:', repo_dict['name'])
# print('Owner:', repo_dict['owner']['login'])
# print('Stars:', repo_dict['stargazers_count'])
# print('Repository:', repo_dict['html_url'])
# print('Created:', repo_dict['created_at'])
# print('Updated:', repo_dict['updated_at'])
# print('Description:', repo_dict['description'])

#打印出搜到所有仓库的部分信息
# print('\nSelected information about each repository:')
# for repo_dict in repo_dicts:
    # print('\nName:', repo_dict['name'])
    # print('Owner:', repo_dict['owner']['login'])
    # print('Stars:', repo_dict['stargazers_count'])  
    # print('Repository:', repo_dict['html_url'])
    # print('Description:', repo_dict['description'])
    
#用列表存储包含在图表中的信息
# names, stars = [], []
# for repo_dict in repo_dicts:
    # names.append(repo_dict['name'])
    # stars.append(repo_dict['stargazers_count'])

#用列表存储包含在图表中的信息，其中plot_dicts不仅仅是star,还有对项目的说明
names, plot_dicts = [], []
for repo_dict in repo_dicts:
    names.append(repo_dict['name'])
    plot_dict = {
        'value': repo_dict['stargazers_count'],
        'label': repo_dict['description'],
        'xlink': repo_dict['html_url'],
    }
    plot_dicts.append(plot_dict)

#可视化
my_style = LS('#333366', base_style=LCS)
my_config = pygal.Config()
my_config.x_label_rotation = 45
my_config.show_legend = False
my_config.title_font_size = 24
my_config.label_font_size = 14
my_config.major_label_font_size = 18 #好像没有用
my_config.truncate_label = 15
my_config.show_y_guides = False
my_config.width = 1000

chart = pygal.Bar(my_config, style=my_style)
chart.title = 'Most-Starred Python Projects on GitHub'
chart.x_labels = names


#chart.add('', stars)
chart.add('', plot_dicts)
chart.render_to_file('python_repos.svg')
