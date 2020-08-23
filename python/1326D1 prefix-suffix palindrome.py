for i in range(int(input())):
    a=list(input().replace('',' ').split());b=[];n=len(a)
    if n==1:
        print(*a)
    else:
        for i in range(len(a)):
            if a[i:].count(a[i])>=2 and a[i] not in b:
                b.append(a[i])
        if a[a.index(b[-1])+1:].index(b[-1])!=0:
            s=b+[a[a.index(b[-1])+1]]+list(reversed(b))
            print(*s,sep='')
        else:
            print(*(b+list(reversed(b))),sep='')
            
            

            
        
       
