def make_shirt(size,logo):
    print("You will get a " + size + " T-shirt with '" + logo + "'.")
make_shirt('S','Hello,world!')
make_shirt(logo='Green',size='M')

print("\n")

def make_shirt(size='L',logo='I love Python'):
    print("You will get a " + size + " T-shirt with '" + logo + "'.")
make_shirt()
make_shirt("M")
make_shirt(logo='SYJ')    

print('\n')

def describe_city(city,country='China'):
    print(city.title() + " is in " + country.title())
describe_city('SH')
describe_city('BJ')
describe_city('reykjavik','iceland')
