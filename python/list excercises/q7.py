x=list(map(int,input().split()))
s=0
d=0
for i in range(0,len(x),2):
    s=s+x[i] 
for j in range(1,len(x),2):
    d=d+x[j]    
print(s if s>d else d)
 
