for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    x=0;b=[0]*n
    for i in range(n):
        if k%2==0:
            if a[i]<k//2:
                b[i]+=1
            elif a[i]==k//2:
                if x%2==0:
                    b[i]+=1
                x+=1
        else:
            if a[i]<=k//2:
                b[i]+=1
    print(*b)