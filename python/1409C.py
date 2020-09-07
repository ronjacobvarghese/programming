for _ in range(int(input())):
    n,x,y=map(int,input().split())
    s=y-x
    i=1
    while x%i!=0 or y%i!=0 or y/(x-i)<n-1:
        print(i)
        i+=1
    print(i)
    