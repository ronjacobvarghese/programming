n,a=map(int,input().split());b=[]
t=list(map(int,input().split()))
for i in range(n):
    if t[i]==1:
        b.append(abs(i+1-a))
r=0
for j in b:
    if b.count(j)==2 :
        r+=1
    elif b.count(j)==1 and (a-1-j<0 or a-1+j>n-1):
        r+=1
    elif j==0:
        r+=1
print(r)
