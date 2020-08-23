for i in range(int(input())):
    n,x=map(int,input().split())
    a=sorted(map(int,input().split()))
    i=n-1;s=0;e=[]
    if x==0:
        print(0)
    else:
        y=x;h=0
        for j in a:
            y=x
            while y%j==0 and j!=1:
                h+=y//j
                y=y//j
                e.append(h)
        if a[i]<=x:
            while a[i]<=x and i>=0:
                x-=a[i]
                s+=1 
                i-=1
        if a[i]>x and i>=0:
            s+=2
        e.append(s)
        print(min(e))
        
        
        
    

