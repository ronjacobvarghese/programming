r,c=map(int,input().split())
for i in range(c-2,-,-1):
    print(i*' ',end='')
    for j in range(1,r-i):
        print(j,end='')
    if j>1:
        for k in range(j-1,0,-1):
            print(k,end='')
    print()
    
