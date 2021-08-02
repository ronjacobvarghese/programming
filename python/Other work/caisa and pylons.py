n=int(input())
a=list(map(int,input().split()))
c=0;r=0
for i in range(n-1,0,-1):
    a[i]=-(a[i]-a[i-1])
a.remove(a[0])
a.insert(0,0)
for i in a[1:n]:
    r+=i
    if r<=0:
        c+=-r
        print(c,r)
        r+=-r
    
    
        
