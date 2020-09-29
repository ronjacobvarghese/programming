for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=[[]]*n;
    for i in range(n):
        b[a[i]-1].append(i)
    print(b)