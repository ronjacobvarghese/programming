n,b,d=map(int,input().split())
a=list(map(int,input().split()))
s=0;c=0
for i in a:
    if b>=i:
        s+=i
    if s>d:
        c+=1
        s=0
print(c)
        
        
        
        
