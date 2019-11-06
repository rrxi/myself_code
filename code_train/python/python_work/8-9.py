def show_magicians(magic_names):
    for magic_name in magic_names:
        print(magic_name.title())
       
magic_names = ['sqa','bfdsfs','dfwr']
show_magicians(magic_names)

print('\n')

def make_great(magic_names):
    magic_new_names = []
    while magic_names:
        magic_new_name = magic_names.pop() + ' the Great'
        magic_new_names.append(magic_new_name)
    magic_names=magic_new_names
    return magic_names

show_magicians(make_great(magic_names))

print('\n')

show_magicians(make_great(magic_names[:]))
show_magicians(magic_names)
