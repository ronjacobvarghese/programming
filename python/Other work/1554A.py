for i in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    ans=0
    for i in range(n):
        ans=max(a[i]*a[i-1],ans)
    print(ans)
    