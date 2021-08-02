a=str(input())
b=['A','E','I','O','U','Y','a','e','i','o','u','y']
for i in set(a):
    if i not in b:
        a.replace('i','.i')
        print(a,i)
    if i in b:
        j=a.count(i)
        while j!=0:
            a=a[0:a.index(i)]+a[:a.index(i)+1]
            j-=1
            print(aa.index(i))
print(*a.lower(),sep='')
