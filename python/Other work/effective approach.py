b=int(input())
a=list(map(int,input().split()))
m=int(input())
c=list(map(int,input().split()))
v=0;p=0
for i in c:
    s=a.index(i)
    v+=s+1
    p+=b-s
print(v,p)

