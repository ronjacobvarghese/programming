for _ in range(int(input())):
    n=int(input())
    if n==1:
        print(0)
    elif n==2:
        print(1)
    else:
        x=int(n**(1/2))
        if x*x==n:
            print(x+x-2)
        else:
            if x*(x+1)>=n:
                print(x+x-1)
            else:
                print(x+x)
        
        