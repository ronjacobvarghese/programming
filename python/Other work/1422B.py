for _ in range(int(input())):
    n,m=map(int,input().split())
    a=[list(map(int,input().split())) for i in range(n)]
    x=0;y=m-1
    i=0;j=n-1;r=0
    while i<j:
        x=0;y=m-1
        while x<y:
            s=(a[i][x]+a[i][y]+a[j][x]+a[j][y])//4
            r+=abs(a[i][x]-s)
            r+=abs(a[i][y]-s)
            r+=abs(a[j][x]-s)
            r+=abs(a[j][y]-s)
            x+=1;y-=1
        i+=1;j-=1
    if n%2!=0:
        x=0;y=m-1
        while x<y:
            r+=abs(a[i][x]-a[i][y])
            x+=1;y-=1
    if m%2!=0:
        i=0;j=n-1
        while i<j:
            s=(a[i][x]+a[j][x])//2
            r+=abs(a[j][x]-s)
            r+=abs(a[i][x]-s)
            i+=1;j-=1
    print(r)
        
        
    