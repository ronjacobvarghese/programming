n=int(input())
a=str(input());c=[]
if n%2!=0:
    i=n//2+1;j=n//2
    c.append(a[i])
    while i!=0:
        c.append(a[-j])
        c.append(a[j])
        print(a[-j],a[j])
        j+=1
        i-=1
print(*c,sep='')
    
