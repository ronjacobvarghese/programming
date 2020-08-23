x=list(map(int,input().split()))
k=int(input())
for i in range(k):
    b=x.pop(0)
    x.append(b)
print(x)
