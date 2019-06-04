def spam():
  eggs = 'spam local'
  print(eggs)

def bacon():

  eggs = 'bacon local'
  print (eggs)
  spam()
  print (eggs)

eggs = 'global'
bacon()
print(eggs)

def spam2():
    global eggs
    eggs = 'spam'
    print(eggs)

spam2()
print(eggs)
