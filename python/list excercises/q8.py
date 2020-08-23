m=list(map(int,input().split()))
n=list(map(int,input().split()))
m.sort()
n.sort()
d=[]
for i in m:
    for j in n:
        d.append([i,j])
for i in range(int(input())):
    print(d[i])
