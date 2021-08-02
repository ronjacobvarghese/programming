n=int(input())
a=list(map(int,input().split()))
r=[]
b=sorted(a)
if n>106:
    print(*list(reversed(a)))
for i in range(len(b)):
    c=b[len(b)-1-b.index(a[i])]
    if  a[i]!=c:
        a[i]=c
    else:
        continue
print(*a)
