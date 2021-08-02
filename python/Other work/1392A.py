for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    if len(set(a))==1:
        print(len(a))
    else:
        print(1)
