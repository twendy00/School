
## Think about turning this into a list of lists

listNames = []

while True:
    print('Enter in the name of list item ' + str(len(listNames) + 1) + ' (Or enter nothing to stop.)' )
    list = input()
    if list == '':
        break
    else:
        listNames = listNames + [list]
print("Here is the list that you made: ")
for list in listNames:
    if listNames.index(list) == 0:
        print('\'' + list.capitalize(), end = "")
    elif listNames.index(list) < (len(listNames) - 1):
        print(', ' + list.capitalize(), end = "")
    else:
        print(' and ' + list.capitalize() + '.\'')
