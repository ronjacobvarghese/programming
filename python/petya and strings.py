a=input()
b=input();x=0;y=0
c='ABCDEFGHIJKLMNOPQRSTUVWXYZ'
for i,j in zip(a,b):
    x+=c.index(i.upper())
    y+=c.index(j.upper())
print(x,y)
if x>y:
    print(1)
elif x<y:
    print(-1)
else:
    print(0)
    
