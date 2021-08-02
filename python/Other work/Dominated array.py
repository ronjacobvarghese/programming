for i in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b,c,e=[],[],set(a)
    t=0
    r=0
    for i in e:
        c.append(a.count(i))
        if a.count(i)>r:
            r=a.count(i)
            t=i
    d=a.count(t)
    if list(e)==a:
        print(-1)
    else:
        s=a.index(t)
        c=0
        for i in range(len(a)):
            if a[i]==t and i!=s:
                b.append(i-s)
                s=i
                c+=1
                if c==d:
                    break
        print(min(b)+1)
                
            
            
            
