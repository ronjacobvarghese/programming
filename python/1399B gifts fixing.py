for i in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    c=min(a)
    d=min(b);s=0
    for i,j in zip(a,b):
        i-=c;j-=d
        s+=max(i,j)
    print(s)
        
