x=list(map(int,input().split()))
d=[]
for i in range(len(x)):
    a=x.insert(0,x.pop())  
    s=0
    for j in range(len(x)):
        s=s+x[j]*j
    d.append(s)
print(max(d))
