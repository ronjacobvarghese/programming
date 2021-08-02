import math
for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=[0]*32
    for i in range(n):
        b[int(math.log(a[i],2))]+=1
    s=0
    for i in b:
        s+=i*(i-1)//2
    print(s)
        
            
            