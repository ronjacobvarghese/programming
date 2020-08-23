for i in range(int(input())):
    a=input();s=0;b=[];c=a.count('1');t=0
    if c==1 or c==0:
        print(0)
    else:
        for i in a:
            if c==0:
                break
            elif i=='1':
                t=1
                c-=1
            elif t==1 and c!=0:
                s+=1
        print(s)
