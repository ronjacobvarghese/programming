for _ in range(int(input())):
    n,x=map(int,input().split())
    a=list(map(int,input().split()))
    if(max(a)<=x):
        print('Yes')
    else:
        s=min(a)
        a[a.index(s)]=101
        if(s+min(a)>x):
            print('No')
        else:
            print('Yes')
            