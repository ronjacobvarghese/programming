for i in range(int(input())):
    n,m,v,k=map(int,input().split())
    b=list(map(int,input().split()))
    t=0
    for i in b:
        s=k
        j=i-1
        while j<=0 and k!=0:
            k-=1
            if j<v:
                t+=j
                j-=j
            else:
                t+=v
                j-=v
                
            print('1',t)
        k=s
        while j<n and k!=0:
            k-=1
            if n-j<v:
                t+=n-j
                j+=n-j
            else:
                t+=v
                j+=v        
        k=s
    print(n-t-len(b)-1)
            
            
   
