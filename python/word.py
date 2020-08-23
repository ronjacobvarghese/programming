a=input()
c=0
b=0
for i in a:
    if i.isupper():
        b+=1
    else:
        c+=1
if b>c:
    print(a.upper())
else:
    print(a.lower())
    
    
