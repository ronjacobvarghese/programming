for i in range(int(input())):
    n=int(input())
    a=list(map(int,input().split()))
    b=sorted(a)
    s=b[0]
    c=[]
    for i in a:
        if i%s==0:
            c.append(i)
    j=0
    c.sort()
    for i in range(n):
        if a[i]%s==0:
            x=c[j]
            a[i]=x
            j+=1
    if a==b:
        print("YES")
    else:
        print("NO")

            