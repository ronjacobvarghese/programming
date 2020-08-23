def singlepush(a,b,n):
    r=[]
    d=[]
    if sum(a)>sum(b):
        print('NO')
    else:
        for i in range(len(a)):
            r.append(b[i]-a[i])
            if b[i]-a[i]!=0:
                d.append(i)
        print(r,d,r[d[0]:(d[-1]+1)])
        if d!=[]:
            if len(set(r[d[0]:(d[-1]+1)]))==1 or len(r)==1:
                print('YES')
            else:
                print('NO')
        else:
            print('YES')
for i in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=list(map(int,input().split()))
    singlepush(a,b,n)
        
            
        
                
                
                
