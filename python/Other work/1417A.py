for _ in range(int(input())):
    n,k=map(int,input().split())
    a=list(map(int,input().split()))
    b=a.index(min(a));s=0
    for i in range(n):
        if i==b or a[i]>=k:
            continue
        s+=abs(k-a[i])//a[b]
    print(s)
        