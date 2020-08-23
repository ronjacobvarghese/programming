n=int(input())
b=input();s=0
a=list(map(ord,b))
c=sorted(a)
c.reverse()
for i in c:
    print(i)
    r=a.index(i)
    print(a[r])
    if a[r-1]+1==a[r] or a[r+1]+1==a[r]:
        a.pop(r)
        s+=1
print(c)
for i in a:
    print(chr(i),end=" ")
        



