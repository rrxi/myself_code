favorite_languages = {
    'jen': 'python',
    'sarah': 'c',
    'edward': 'ruby',
    'phil': 'python',
    }
print("Sarah's favorite language is " + favorite_languages['sarah'].title() + ".")

print("\n")

friends = ['phil','sarah']
for name in favorite_languages.keys():
    print(name.title())
    if name in friends:
        print(" Hi " + name.title() + 
        ", I see your favorite lanuage is " + 
        favorite_languages[name].title() + "!")
        
print("\n")

for name in sorted(favorite_languages.keys()):
    print(name.title() + ",thank you taking the poll.")
    
print("\n")

print("The following languages have been mentioned:")
for language in favorite_languages.values():
    print(language.title())
print("\n")
for language in set(favorite_languages.values()):
    print(language.title())
    
print("\n")

should_check = ['jen','phil']
for name in favorite_languages.keys():
    if name in should_check:
        print("thank for you check," + name.title() + ".")
    else:
        print("you should join check," + name.title() + ".")
    
print("\n")

favorite_languages = {
    'jen': ['python', 'ruby'],
    'sarah': ['c'],
    'edward': ['ruby','go'],
    'phil': ['python', 'haskell'],
}
for name,languages in favorite_languages.items():
    if len(languages) == 1:
        for language in languages:
             print('\n' + name.title() + "'s favorite languages is " + 
             language + '.')
    else:
        print('\n' + name.title() + "'s favorite languages are:")
        for language in languages:
            print("\t" + language.title())
   
