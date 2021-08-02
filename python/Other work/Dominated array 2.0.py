for i in range(int(input())):
    r=i
    n=int(input())
    a=list(map(int,input().split()))
    b=[]
    for i in set(a):
        b.append([a.count(i),i])
    c=max(b)[1]
    s=1;d=[];e=[];f=[]
    for i in a[(a.index(c)+1):]:
        e.append(i)
        s+=1
        if i==c:
            d.append(s)
            s=1
            f.append(e)
            e=[]
    if r==50:
        print(f,d,c)
    print(min(d) if d!=[] else -1)
