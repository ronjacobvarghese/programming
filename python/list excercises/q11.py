x=list(map(int,input().split()))
a=set(x)
d=[[x.count(i),i] for i in a]
d.sort()
e=[]
for i in range(1,len(d)+1):
    for j in range(d[-i][0]):
        e.append(d[-i][1])
print(e)
