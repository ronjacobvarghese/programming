for i in range(int(input())):
    a,b=input().split()
    b=int(b)
    a=list(map(int,a))
    print(a,b)
    i=0;s=1000000;r=len(a)
    if r<b+1:
        print(-1)
    else:
        while b!=r:
            d=abs(sum(a[i:b])-sum(a[i+1:b+1]))
            if s>d:
                s=d
            if s==0:
                break
            i+=1;b+=1
        print(s)
       
    
