a=list(map(int,input().split()))
r=sorted(list(map(int,input().split())),reverse=True)
g=sorted(list(map(int,input().split())),reverse=True)
b=sorted(list(map(int,input().split())),reverse=True)
m=a.pop(a.index(min(a)))
i=0;s=0
while i!=m:
    s+=max(r[i]*b[i],r[i]*g[i],b[i]*g[i])
    i+=1
if m==len(b):
    m=min(a)
    while i!=m:
        s+=r[i]*g[i]
        i+=1
elif m==len(g):
    m=min(a)
    while i!=m:
        s+=r[i]*b[i]
        i+=1
else:
    m=min(a)
    while i!=m:
        s+=b[i]*g[i]
print(s)
    

