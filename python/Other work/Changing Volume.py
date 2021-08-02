for i in range(int(input())):
    a,b=map(int,input().split())
    c=0
    if a!=b:
        if a<b:
            b-=a
            if b>=5:
                c+=b//5
                b=b%5
            if b==3 or b==4:
                c+=2
            elif b==1 or b==2:
                c+=1
        else:
            a-=b
            if a>=5:
                c+=a//5
                a=a%5
            if a==3 or a==4:
                c+=2
            elif a==1 or a==2:
                c+=1
     
                
    print(c)
        
