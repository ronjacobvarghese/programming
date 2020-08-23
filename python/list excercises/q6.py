x=list(map(int,input().split()))
x.sort()
print(sum(x)/len(x))
if len(x)%2==0:
    print((x[(len(x)-1)//2]+x[len(x)//2])/2)
else:
    print(x[len(x)//2])
    
