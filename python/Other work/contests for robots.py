n=int(input())
a=list(map(int,input().split()))
b=list(map(int,input().split()));c=[]
for i,j in zip(a,b):
    c.append(i-j)
if 1 not in c:
    print(-1)
else:
    print(c.count(-1)//c.count(1)+1)
    
    
