eggs = {'name': 'Zophie', 'species': 'cat', 'age': '8'}
ham = {'species': 'cat', 'age': '8', 'name': 'Zophie'}
print(eggs == ham)

birthdays = {'Alice': 'Apr 1', 'Bob': 'Dec 12', 'Carol': 'Mar 4'}

while True:
    print('Enter a name: (enter blank to quit)')
    name = input()
    if name == '':
        break

    if name in birthdays:
            print(birthdays[name] + ' is the birthday of ' + name + '.')
    else:
        print('I do not have birthday information for '+ name + '.')
        print('What is their birthday?')
        bday = input()
        birthdays[name] = bday
        print('Birthday database updated.')

spam = {'color': 'red', 'age': 42}
for v in spam.values():
    print(v)
for k in spam.keys():
    print(k)
for i in spam.items():
    print(i)
print(list(spam.keys()))
for k, v in spam.items():
    print('Key: ' + k + ' Values: ' + str(v))

picnicItems = {'apples': 5, 'cups': 2}
##print('I am bringing ' + str(picnicItems['eggs']) + ' eggs.')
print('I am bringing ' + str(picnicItems.get('eggs', 0)) + ' eggs.')

cats = {'name': 'Pooka', 'age': 5}
##print(cats.setdefault('color', 'black'))
print(cats.setdefault('color', 'white'))
