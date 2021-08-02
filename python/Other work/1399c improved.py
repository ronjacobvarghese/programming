for _ in range (int(input())):
    n=int(input())
    a=list(input())
    s=a.count('1')
    y=1;b=a[:n-y]
    while y!=n:
        for x,j in zip(range(n-y),range(y,n)):
            b[x]=int(b[x])+int(a[j])
        y+=1;
        s+=b.count(y)
        b=b[0:n-y]
        
    print(s)
        
        
    
