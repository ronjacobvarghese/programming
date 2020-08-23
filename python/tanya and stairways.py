n=int(input())
s=0;b=[]
if n==1:
    print(1)
    print(1)
else:    
    a=list(map(int,input().split()))
    for i,j in zip(a[:len(a)-1],a[1:]):
        if i>=j:
            b.append(i)
            s+=1
    b.append(j)
    s+=1
    print(s)
    print(*b)
        
