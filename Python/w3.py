name = 'Dracula'
age = 86
if name == 'Alice':
    print('Hello Alice!')
elif age < 12:
    print('You are not Alice, kiddo.')
elif age > 100:
    print('You are not Alice, grannie.')
elif age > 2000:
    print('Unlike you, Alice is not an undead immortal.')
else:
    print('You are neither Alice or a little kid.')


spam = 0
if spam < 5:
    print(spam)
    spam = spam + 1

spam = 0
while spam < 5:
    print(spam)
    spam = spam + 1

name = ''
while name != 'your name':
    print('Please type your name')
    name = input()
print('Thank you')

while True:
    print('Please type your name')
    name = input()
    if name == 'your name':
        break
print('Thank you!')

while True:
    print('Hello World!')
