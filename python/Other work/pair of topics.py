n=int(input())
a=list(map(int,input().split()));c=[]
b=list(map(int,input().split()));s=0
for i,j in zip(a,b):
    c.append(i-j)
c.sort()
d=n-1;e=0
while c[d]>0 and d>e:
    if c[d]+c[e]>0:
        s+=d-e
        d-=1
    else:
        e+=1
print(s)
        
