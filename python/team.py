b=0
for i in range(int(input())):
    a=list(map(int,input().split()))
    if a.count(1)>=2:
        b+=1
print(b)
    
