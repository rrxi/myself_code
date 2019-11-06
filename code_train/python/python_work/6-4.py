river_country = {'A': 'z','B': 'y','C': 'x'}
for r,c in river_country.items():
    print("The " + r +" runs through " + c + '.')
for r in river_country.keys():
    print(r)
for c in sorted(river_country.values()):
    print(c)
