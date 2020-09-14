import math
for _ in range(int(input())):
    n=int(input())
    a=sorted(list(map(int,input().split())),reverse=True)
    b=a.pop(0)
    print(b,end=" ")
    if n==1:
        print()
        continue
    max=math.gcd(b,a[0])
    s=0
    for i in range(n-2,-1,-1):
        t=math.gcd(b,a[i])
        if max<t:
            max=t
            s=i
            
    print(a.pop(s),end=" ")
    for i in range(n-2):
        if i%max==0:
            print(a[i],end=" ")
            a[i]=-1
    for i in a:
        if i==-1:
            continue
        print(i,end=" ")
    print()
        
            
        
        
    