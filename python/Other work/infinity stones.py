for i in range(int(input())):
    n,m,k=map(int,input().split())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    c=[];s=0
    for i,j in zip(a,b):
        c.append(j-i)
    print(c)
    for i in c:
        if k==0:
            break
        s+=max(c)
        n-=a[c.index(max(c))]
        c.remove(max(c))
        k-=1
        print(n)
    if s>=n:
        print('YES')
    else:
        print('NO')
