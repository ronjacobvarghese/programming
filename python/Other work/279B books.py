n,t=map(int,input().split())
a=list(map(int,input().split()));s=0;j=0
for i in range(n):
    s+=a[i]
    if s>t:
        s-=a[j]
        j+=1
print(n-j)
        
