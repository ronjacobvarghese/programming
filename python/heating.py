for i in range(int(input())):
    a,b=map(int,input().split())
    if a>b:
        print(b)
    elif a==1:
        print(b**2)
    else:
        c=1
        b-=a
        if b%2!=0:
            b+=1
        while b%2==0 and a>0:
            c+=4
            a-=1
            b//=2
            if b%2!=0:
                b+=1
            print(a,b)
        print(c)
        
