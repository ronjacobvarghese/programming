c=0;n=int(input());a=input()
for i,j in zip(a,a[1:]):
    if i==j:
        c+=1
print(c)
