import random

messages = ['It is certain',
            'It is decidedly so',
            'Yes definitely',
            'Reply hazy try again',
            'Ask again later',
            'Concentrate and ask again',
            'My reply is no',
            'Outlook not so good',
            'Very doubtful' ]
print(messages[random.randint(0, len(messages) -1)])

def eggs(someParameter):
    someParameter.append('Hello')

spam = [1, 2, 3]
eggs(spam)
print(spam)

import copy
spam = ['A', 'B', 'C', 'D']
cheese = copy.copy(spam)
cheese[1] = 42
print(spam)
print(cheese)

print(spam[:2])

bacon = [3.14, 'cat', 11, 'cat', True]
bacon.remove('cat')
print(bacon)
