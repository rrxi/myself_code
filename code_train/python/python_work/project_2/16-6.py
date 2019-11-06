import json
import pygal_maps_world.maps
from country_codes import get_country_code
from pygal.style import RotateStyle
from pygal.style import LightColorizedStyle

#将数据加载到一个列表
filename = 'gdp.json'
with open(filename) as f:
    gdp_data = json.load(f)
    
#打印每个国家2016年的GDP
cc_gdp = { }
for gdp_dict in gdp_data:
    if gdp_dict['Year'] == '2010':
        country_name = gdp_dict['Country Name']
        gdp = int(float(gdp_dict['Value']))
        code = get_country_code(country_name)
        if code:
            cc_gdp[code] = gdp
        else:
            print('Error - ' + country_name)

#根据gdp将所有国家分为3组
# cc_gdp_1, cc_gdp_2, cc_gdp_3 = {}, {}, {}
# for cc, gdp in cc_gdp.items():
    # if gdp < 100000000000:
        # cc_gdp_1[cc] = gdp
    # elif gdp < 1000000000000:
        # cc_gdp_2[cc] = gdp
    # else:
        # cc_gdp_3[cc] = gdp
        
#看看每组包含多少个国家
#print(len(cc_gdp_1), len(cc_gdp_2), len(cc_gdp_3))

#可视化
wm_style = RotateStyle('#335689', base_style=LightColorizedStyle)
wm = pygal_maps_world.maps.World(style=wm_style)
wm.title = 'World GDP in 2016, by Country'
wm.add('one', cc_gdp)
# wm.add('two', cc_gdp_2)
# wm.add('three', cc_gdp_3)

wm.render_to_file('world_gdp.svg')
