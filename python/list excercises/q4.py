a=list(map(int,input().split()))
a.sort()
for i in range(0,len(a),2):
    a.insert(i,a.pop())
print(a)
