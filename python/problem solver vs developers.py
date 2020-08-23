n,m=map(int,input().split())
a=sorted(list(map(int,input().split())))
b=sorted(list(map(int,input().split())));c=0;s=0;i=0
print(a)
print(b)
if len(a)>len(b):
    print('NO')
else:
    while i<n and c<m:
        if a[i]>=b[c]:
            c+=1
        elif c==m-1 and b[m-1]>a[i]:
            s+=b[c]
            break
        else:
            s+=b[c]
            print(b[c])
            i+=1
            c+=1
    if c==m:
        print('NO')
    else:
        print('YES')
        print(s)
