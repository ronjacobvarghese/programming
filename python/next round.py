n,k=map(int,input().split())
a=list(map(int,input().split()))
d=a[k-1];j=0
if sum(a)==0:
    print(0)
else:
    for i in a:
        if i==0:
            continue
        elif i>=d:
            j+=1
    print(j)
        
