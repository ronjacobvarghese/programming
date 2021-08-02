def search(a,k,e):
    b=0;r=0
    while(b<=e):
        x=b+(e-b)//2
        if a[x]<=k:
            r=x+1
            b=x+1
        else:
            e=x-1
    return r
n,m=map(int,input().split())
a=[int(i) for i in input().split()]
b=[int(i) for i in input().split()]
a.sort()
for i in b:
    if n==1:
        if a[0]<=i:
            print(n)
        else:
            print(0)
    else:
        print(search(a,i,n-1),end=" ")
