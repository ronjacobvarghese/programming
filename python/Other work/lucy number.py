a,b=map(int,input().split());j=0 ;c=[]
for i in range(b+1):
    c.append(str(i))
for i in range(a):
    a=set(str(int(input())))
    if set(c).intersection(a)==set(c):
        j+=1
print(j)
