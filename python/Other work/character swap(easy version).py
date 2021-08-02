for i in range(int(input())):
    n=int(input())
    a=input()
    b=input()
    d=[]
    r=[]
    c=0
    for i in range(n):
        if a[i]!=b[i]:
            c=c+1
            d.append(a[i])
            r.append(b[i])
    if c%2==0 and len(set(d))==1 and len(set(r))==1:
        print('YES')
    else:
        print('NO')
        
