a=input()
if 'ing' in a[(len(a)-4):]:
    a=a+'ly'
else:
    a=a+'ing'
print(a)
