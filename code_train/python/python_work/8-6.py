def city_country(city, country):
    print('"' + city.title() + ', ' + country.title() + '"' )

city_country('santiago', 'chile')

print('\n')

def make_album(singer, album, sing_number=''):
    if sing_number:
        print(singer.title() + ' issued 《' + album + '》,and it include ' +
              sing_number + ' sings.')
    else:
        print(singer.title() + ' issued 《' + album + '》.')
make_album('alice','Let','5')
make_album('brich','Doo')

print('\n')

while True:
    print('\nPlease input some information')
    print("(enter 'q' at any time to quit)")
    singer = input("Singer's name: ")
    if  singer == 'q':
        break
    album = input("Singer's album: ")
    if album == 'q':
        break
    make_album(singer, album)
