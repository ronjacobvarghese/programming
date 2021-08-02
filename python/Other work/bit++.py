i=0
for j in range(int(input())):
    x=str(input())
    if '+' in x:
        i+=1
    elif '-' in x:
        i-=1
print(i)
    
