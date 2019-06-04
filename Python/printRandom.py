import random
for i in range(5):
    print(random.randint(1,10))

"""
import sys

while True:
    print('Type exit to exit.')
    response = input()
    if response == 'exit':
        sys.exit()
    print('You typed ' + response + '.')
"""


print('Enter a number')
spam = int(input())
if spam == 1:
    print('Hello')
elif spam == 2:
    print('Howdy')
else:
    print('Greetings')

for n in range(1,11):
    print(n)
    n = n + 1

n = 1
while n < 11:
    print(n)
    n = n + 1

print(abs(-1000))
