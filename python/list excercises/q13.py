m=list(map(int,input().split()))
n=list(map(int,input().split()))
d=0
for i in m:
    c=0
    for j in n:
        if (i+j)%2!=0:
            c+=1
            d+=1
            if c==1:
                n.pop(n.index(j))
                print(i,j)
                break
print(d)
        
        
