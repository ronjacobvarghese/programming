n=int(input());a=sorted(list(map(int,input().split())))
m=int(input());b=sorted(list(map(int,input().split())));j=0
if a[-1]>b[-1]:
    i=n-1
    while i!=-1:
        if a[i]+1 in b:
            j+=1
            m-=1
            b.remove(a[i]+1)
        elif a[i] in b[:m]:
            j+=1
            b.remove(a[i])
        elif a[i]-1 in b:
            j+=1
            b.remove(a[i]-1)
        i-=1
else:
    i=m-1
    while i!=-1:
        if b[i]+1 in a:
            j+=1
            a.remove(b[i]+1)
        elif b[i] in a:
            j+=1
            a.remove(b[i])
        elif b[i]-1 in a:
            j+=1
            a.remove(b[i]-1)
        i-=1
print(j)
            
