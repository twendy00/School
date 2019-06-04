# This program says hello and asks for my name and age

print ('Hello world!')
print ('What is your name?') #ask for their name
myName = input()
print('It is good to meet you,' + myName)
print('The length of your name is:' )
 print(len(myName))
print('What is your age?') #ask for their age
myAge = input()
print('You will be ' + str(int(myAge) + 1) + ' in a year.'





a = 6
print(a)
print("Hello World!")

name = 'Wendy'
age = 26

if name == 'Alice':
    print('Hi, Alice.')
elif age < 12:
    print('You are not Alice, kiddo.')
elif age > 100:
    print('You are not Alice, granny.')
else:
    print('Hello, stranger.')


spam = 15
while spam < 5:
    print('Hello, world!')
    spam = spam + 5
