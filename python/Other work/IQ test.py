c=0;b=[]
for i in range(4):
    a=input()
    b.append(a)
    if len(set(a))!=1:
        c+=1
if c==1:
    print("YES")
elif b==['....','....','....','....'] or b==['####','####','####','####']:
    print('YES')
else:
    print('NO')


        
