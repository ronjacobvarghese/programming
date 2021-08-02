for i in range(int(input())):
    d=input()
    a=d.replace('',' ').split()
    b={'a','b','c'}
    c=0
    for i in b:
        if i*2 in d:
            c+=1
    if c>0:
        print(-1)
    elif set(d)=={'?'} and len(d)<4:
        b=sorted(b)
        print(*b[0:(len(d))],sep="")
    elif set(d)=={'?'}:
        print('abc'*(len(d)/3))
    else:
        while '?' in a:
            t=b.copy()
            r=a.index('?')
            if r!=0 and r!=len(a)-1:
                t.discard(a[r-1])
                t.discard(a[r+1])
            elif r==0:
                t.discard(a[r+1])
            elif r==len(a)-1:
                t.discard(a[r-1])   
            t=sorted(t)
            a.pop(r)
            a.insert(r,t[0])
        print(*a,sep='')
            
    
