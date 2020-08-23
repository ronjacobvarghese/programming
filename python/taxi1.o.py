n=int(input())
a=list(map(int,input().split()))
b=[1]*a.count(1)
c=[3]*a.count(3)
s=0
e=0
for i,j in zip(b,c):
    s+=1
d=a.count(2)
if b>c:
    e=b-c
for i,j in zip([2]*d,[1]*e):
    s+=1
e-=d
d-=e
if e>0:
    s+=e//4+1
elif d%2!=0:
    s+=d//2+1
elif d%2==0:
    s+=d//2
print(s)
    
    


    
    
    


    



    
