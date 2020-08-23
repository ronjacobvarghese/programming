n,q=map(int,input().split())
a=[1]*n
b=[2]*n
for i in range(q):
    c=[];d=[]
    x,y=map(int,input().split())
    y-=1
    if x==1:
        if a[y]==1:
            a[y]=0
            if y==n-1 :
                if b[n-2]==0:
                    print('No')
                    continue
            elif b[y-1]==0 or b[y+1]==0:
                print('No')
                continue
        else:
            a[y]=1
    if x==2:
        if b[y]==2:
            b[y]=0
            if y==0 :
                if a[y+1]==0:
                    print('No')
                    continue
            elif a[y-1]==0 or a[y+1]==0:
                print('No')
                continue
        else:
            b[y]=2
    for i,j in zip(a,b):
        c.append(j-i)
    for i,j in zip(c[:len(c)-1],c[1:]):
        d.append(i+j)
    if 0 in c or 1 in d:
        print('No')
    else:
        print('Yes')
        
    
    
    
