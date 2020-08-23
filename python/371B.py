import math
n,m=map(int,input().split())
s=math.gcd(n,m)
n=n//s;m=m//s
a=[2,3,5];i=0;r=0
while i!=3:
    if n%a[i]==0:
        n=n//a[i]
        r+=1
    else:
        i+=1
i=0
while i!=3:
    if m%a[i]==0:
        m=m//a[i]
        r+=1
    else:
        i+=1
if n==m==1:
    print(r)
else:
    print(-1)

    

    
