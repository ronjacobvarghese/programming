a=int(input())
b=input().split()
i=0;s=0;d=0;
while i<a:
    r=int(max(int(b[0],int(b[-1]))))
    if i%2!=0:
        s+=m
        b.remove(str(r))
    else:
        d+=m
        b.remove(str(b))
    i+=1
print(d,s                   )
