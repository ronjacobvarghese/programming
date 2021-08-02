n=int(input());a=list(map(int,input().split())
m=int(input());b=list(map(int,input().split()));j=0
for i in range(n):
    if a[i]+1 in b:
        j+=1
        b.remove(a[i]+1)
    elif a[i] in b:
        j+=1
        b.remove(a[i])
    elif a[i]-1 in b:
        j+=1
        b.remove(a[i]-1)
print(j)
