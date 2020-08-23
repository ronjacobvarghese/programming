for i in range(int(input())):
    n=int(input())
    a=[]
    s=0
    d=0
    for i in range(n):
        x=list(map(int,input().replace(""," ").split()))
        s+=x.count(1)
        d+=x.count(0)
        a.append(len(x))
    for i in a:
        if s<i-2 and d<i-2:
            break
        elif i%2==0:
            if s>=d:
                d-=2
                s-=i-2
            else:
                d-=i-2
                s-=2
        else:
            if s>=d:
                d-=1
                s-=i-1
            else:
                d-=i-1
                s-=1
    if s==0 and d==0:
        print(n,s,d)
    elif s==i or d==i:
        print(n)
    else:
        print(n-1,s,d)
    
