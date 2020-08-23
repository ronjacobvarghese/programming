n=int(input())
a=list(map(int,input().split()));b=[];
for i in range(n):
    c=1
    x=i;y=i
    while x>=1:
        if a[x]>=a[x-1]:
            c+=1
            x-=1
        else:
            break
    while y<=n-2:
        if a[y]>=a[y+1]:
            c+=1
            y+=1
        else:
            break
    b.append(c)
print(max(b))
        
    
    
        
