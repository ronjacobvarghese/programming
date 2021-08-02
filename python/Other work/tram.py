c=[];s=0
for i in range(int(input())):
    a,b=map(int,input().split())
    s+=b-a
    c.append(s)
print(max(c))
