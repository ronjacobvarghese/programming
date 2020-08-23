for i in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    s=0;c=0;d=[];e=[]
    for i in set(a):
        if i!=-1:
            s+=i
            c+=1
    
    if c==0:
        print(0,1)
        continue
    r=s//c;t=r+2
    while t!=r:
        d=[]
        for i,j in zip(a[0:n-1],a[1:n]):
            if i==j :
                d.append(0)
            elif i==-1:
                d.append(abs(r-j))
            elif j==-1:
                d.append(abs(r-i))
            else:
                d.append(abs(i-j))
        e.append(d)
        r+=1
    if c==0:
        continue
    elif max(e[1])<max(e[0]):
        print(max(e[1]),r-1)
    else:
        print(max(e[0]),s//c)
        
   
        
    
            
