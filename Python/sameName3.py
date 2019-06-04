def spam():
    global eggs
    eggs = 'spam'
    print(eggs)
def bacon():
    eggs = 'bacon'
def ham():
    print(eggs)

spam()
ham()
eggs = 42
print(eggs)


def function_that_prints():
    print("I printed")

def function_that_returns():
    return("I returned")

f1 = function_that_prints()
f2 = function_that_returns()
print("Now let us see what the values of f1 and f2 are")
##print(f1)
print(f2)


def math(divideBy):
    try:
        return 42/divideBy
    except ZeroDivisionError:
        print('Error: Poopy Statement')
print(math(2))
print(math(12))
print(math(0))
print(math(1))


def math2(divideBy):
    return 42/divideBy

try:
    print(math2(2))
    print(math2(12))
    print(math2(0))
    print(math2(1))
except ZeroDivisionError:
    print('Error')
