for _ in range(int(input())):
    n,x,y=map(int,input().split())
    i=(y-x)//n+1;t=y
    while (y-x)%i:
        i+=1
    while y>0 and n!=0:
        print(y,end=" ")
        y-=i
        n-=1
    while n:
        t+=i
        print(t,end=" ")
        n-=1
    print()
    
        