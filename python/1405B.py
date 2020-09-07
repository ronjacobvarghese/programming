for _ in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()));b=[]
    for i in range(n):
        if a[i]>0:
            b.append(i)
    j=0
    if n==1:
        print(0)
    else:
        for i in range(b[0]+1,n):
            if a[i]>=0:
                continue
            if a[b[j]]>=-a[i]:
                a[b[j]]+=a[i]
                a[i]=0
            else:
                a[i]+=a[b[j]]
                a[b[j]]=0
                j+=1
        s=0

        a.sort()

        for i in a:
            if i>=0:
                break
            s-=i
        print(s)
            
        