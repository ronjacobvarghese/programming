x=list(map(int,input().split()))
d=[]
for i in range(len(x)):
    if i in  x:
        d.append(i)
    else:
        d.append(-1)
print(d)
