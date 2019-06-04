# This program says hello and asks for my name.

print('Hello world!')

print('What is your name?')    # ask for their name
myName = input()
print('It is good to meet you, ' + myName)

print('The length of your name is:')
print(len(myName))
print('What is your age?')    # ask for their age
myAge = input()
print('You will be ' + str(int(myAge) + 1) + ' in a year.')

print('Hello. What is your name?')
name = input()
print('Hello ' + name + '. What is the secret password?')
password = input()
if password == 'fishy':
    print('Access granted.')
else:
    print('Wrong Password. Try Again')

name = 'Bob'
if name == 'Alice':
    print('Hello Alice!')
else:
    print('Hello Stranger!')
