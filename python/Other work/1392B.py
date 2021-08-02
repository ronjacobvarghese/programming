for _  in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    if n==1:
        print(0,end=" ")
    elif k%2!=0:
        d=max(a)
        for i in range(n):
            print(d-a[i],end=" ")
    else:
        e=max(a)
        d=min(a)
        for i in a:
            print(i-d,end=" ")
    print()
