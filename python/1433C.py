for i in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=sorted(set(a))
    if len(b)==1:
        print(-1)
    else:
        c=[]
        for i in range(n):
            if a[i]==b[-1]:
                c.append(i)
        if len(c)==1:
            print(c[0]+1)
        elif c[0]==1:
            print(c[0]+1)
        else:
            x=0;y=1;l=1
            print(c)
            while y!=len(c):
                if c[y]-c[x]>1:
                    print(c[x]+1);l=0
                    break
                y+=1;x+=1
            if l:
                print(c[y-1]+1)
            