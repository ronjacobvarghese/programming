for i in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    s=a.count(0)
    i=0;
    while a[i]==0:
        s-=1;i+=1
    i=n-1
    while a[i]==0:
        s-=1;i-=1
    print(s)