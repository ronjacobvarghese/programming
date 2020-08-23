k,r=map(int,input().split())
if k%5==0 and r==5:
    print(1)
elif k%10==0:
    print(1)
elif k%5==0:
    print(2)
else:
    for i in range(1,11):
        if k*i%10==0:
            print(i)
            break
        elif (k*i-r)%10==0:
            print(i)
            break


    
    
