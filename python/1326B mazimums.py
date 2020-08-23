n=int(input())
b=list(map(int,input().split()))
j=0;a=[]
for i in b:
    a.append(i+j)
    if i+j>j:
        j=i+j
print(*a)
