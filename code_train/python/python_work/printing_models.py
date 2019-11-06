#首先创建一个列表，其中包含一些要打印的设计
unprinted_designs = ['iphone case',  'robot pendant', 'dodecahedron']
complete_models = []

#模拟打印每个设计，直到没有未打印的设计为止
#打印每个设计后，都将其移到列表completed_models中
while unprinted_designs:
    current_design = unprinted_designs.pop()
    
    #模拟根据设计制作3D打印模型的制作过程
    print("Printing model: " + current_design)
    complete_models.append(current_design)
    
#显示打印好的所有模型
print("\nThe following models have been printed:")
for complete_model in complete_models:
    print(complete_model)
    
print("\n")

def print_models(unprinted_designs, completed_models):
    '''
    模拟打印每个设计，直到没有未打印的设计为止
    打印每个设计后，都将其移到列表completed_models中
    '''
    while unprinted_designs:
        current_design = unprinted_designs.pop()
        #模拟根据设计制作3D打印模型的过程
        print("Printing model: " + current_design)
        completed_models.append(current_design)
        
def show_completed_models(completed_models):
    '''显示打印好的所有模型'''
    print("\nThe following models have been printed:")
    for complete_model in complete_models:
        print(complete
        _model)
    
unprinted_designs = ['iphone case', 'robot pendant', 'dodecahedron']
complete_models = []

print_models(unprinted_designs,complete_models)
show_completed_models(complete_models)
