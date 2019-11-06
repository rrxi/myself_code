def city_functions(city, country,population=0):
    if population:
        result = city.title() + ", " + country.title() + ' - population ' + str(population)
    else:
        result = city.title() + ", " + country.title()
    return result
