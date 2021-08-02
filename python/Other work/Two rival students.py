for i in range(int(input())):
    n,x,a,b=map(int,input().split())
    if x+abs(a-b)>=n:
        print(n-1)
    else:
        print(abs(a-b)+x)
    
