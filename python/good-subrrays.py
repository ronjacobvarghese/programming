for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().replace('',' ').split()))
    s=0;x=0;b=n*[0];
    for i in range(1,n+1):
        x=0
        
        for j in range(0,n,i):
            b[x]+=a[j]
            x+=1
        s+=b.count(i)
        print(b,s)
    print(s)
            
            
        
        
        
                    
            
            
            
        
    