a=input()
b='heidi';j=0
for i in a:
    if i==b[j]:
        j+=1
    if j==5:
        break
print('YES' if j==5 else 'NO')
    
