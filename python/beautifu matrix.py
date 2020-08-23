x=[2,1,0,1,2];s=0
for i in range(5):
    a=input().replace(' ','')
    if '1' in a:
        s=x[i]+x[a.index('1')]
        break
print(s)
    
        
