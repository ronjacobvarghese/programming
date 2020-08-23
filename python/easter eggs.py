n=int(input())
a=['R','B','I','V']
b='+'+'*'*(n//7)
for i in range(n%7):
    b+=a[i]
print(b)



