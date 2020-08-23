x=list(map(int,input().split()))
x.sort()
s=0
for i in range(1,int(input())+1):
    s+=x[-i]
    print(s)
print(s)
