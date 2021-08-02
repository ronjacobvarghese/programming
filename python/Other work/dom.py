t=int(input());j=0
for i in range(t):
    n=int(input())
    a=list(map(int,input().split()))
    b=[]
    for i in set(a):
        b.append([a.count(i),i])
    c=max(b)[1]
    v=c
    s=0;d=[];r=0
    for i in a:
        if i==c:
            r+=1
        if r==1:
            s+=1
        if i==c and r==2:
            s+=1
            d.append(s)
            r=1
            s=1
    print(min(d) if d!=[] else -1)
                
            
            
    
