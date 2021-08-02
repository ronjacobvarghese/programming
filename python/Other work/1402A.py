n=int(input())
h=list(map(int,input().split()))
w=list(map(int,input().split()));d=0
b=max(h)
x=sum(w)
c=[]
for i in range(n):
    c.append([h[i],w[i]])
c.sort() 
d=x*(x+1)//2
for i in range(n):
    x-=c[i][1]
    d=d+((i+2)*x*(x+1)//2)%(10**9+7)
print(d)