a=list(map(int,input().replace('',' ').split()));i=0
while len(a)!=1:
    a=list(map(int,str(sum(a)).replace('',' ').split()))
    i+=1
print(i)
