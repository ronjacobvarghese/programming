a=list(map(int,input().split()));sum=0;best=0
for i in a:
    sum=max(i,sum+i)
    best=max(sum,best)
print(best)
       