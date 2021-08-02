for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    u=a.index(max(a))
    v=a.index(min(a))
    print(min(max(u,v)+1,max(n-u,n-v),u+1+n-v,v+1+n-u))
    
        
    
    
    