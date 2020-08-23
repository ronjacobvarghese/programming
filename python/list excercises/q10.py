x=list(map(int,input().split()))
x.sort()
d=[]
for i in range(len(x)-1):
    for j in x[(i+1):]:
        print(j,x[i])
        d.append(j-x[i])
print(min(d))       
