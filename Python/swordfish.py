while True:
    print('Who are you?')
    name = input()
    if name != 'Joe':
        continue
    print('Hello, Joe. What is the password?')
    password = input()
    if password == 'swordfish':
        break
print('Access Granted.')

name = ''
while not name:
    print('Enter your name:')
    name = input()
print('How many guests will you have?')
numOfGuests = int(input())
if numOfGuests:
    print('Be sure to have enough room for all your guests.')
print('Done')

print('My name is')
for i in range(5):
    print('Jimmy Five Times (' + str(i) + ')')

total = 0
for num in range(101):
    total = total + num
print(total)

print("My name is")
i = 0
while i < 5:
    print('Jimmy Five Times (' + str(i) + ')')
    i = i + 1

for i in range(0, 10, 2):
    print(i)

for i in range (5, -1, -1):
    print(i)
