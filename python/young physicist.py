s=0
for i in range(int(input())):
    a=list(map(int,input().split()))
    s+=sum(a)
if s==0:
    print('YES')
else:
    print('NO')
