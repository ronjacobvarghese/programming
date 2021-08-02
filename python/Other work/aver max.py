for i in range(int(input())):
    n,k=map(int,input().split())
    a=sorted(list(map(float,input().split())))
    for i in range(k):
        a[i]=-a[i]
    a=sorted(a)
    print((a[n-1]+a[n-2])//2 if (a[n-1]+a[n-2])//2 >a[n-1] else a[n-1] )
    
    
