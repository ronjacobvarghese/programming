n,a,b,k=map(int,input().split())
c=list(map(int,input().split()))
d=[];s=0;
for i in c:
    if a+b>i:
        d.append(i-a)
    elif i%(a+b)==0:
        d.append(b)
    else:
        d.append(i%(a+b)-a)
e=sorted(set(d))
print(d,len(e),k)
for i in e:
    if k==0:
        break
    if i<=0:
        s+=d.count(i)
    elif i%a<=a:
        if k>=d.count(i):
            k-=d.count(i)
            s+=d.count(i)
        else:
            s+=k//i
            k=0
    else:
        if k>=2*d.count(i):
            k-=2*d.count(i)
            s+=d.count(i)
                
print(s)
    
        
    

    
