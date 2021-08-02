t=int(input())
for ij in range(0,t):
    n=int(input())
    a=[0]+list(map(int,input().split()))
    m=int(input())
    l=[0]*(n+1)
    for i in range(0,m):
    	    p,s=map(int,input().split())
    	    l[s]=max(l[s],p)
    print(1,l)
    for i in range(n-1,-1,-1):
    	    l[i]=max(l[i],l[i+1])
    print(l)
    ans=0
    k=0
    while k<n:
    	    q=0
    	    t=0
    	    while k+t+1<=n and l[t+1]>=max(q,a[k+t+1]):	
    		    q=max(q,a[k+t+1])
    		    t+=1
    		    print(q,end=' ')
    	    if t==0:
    		    ans=-1
    		    break
    	    k+=t
    	    ans+=1
    print(ans)
     
