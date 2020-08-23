for _ in range(int(input())):
    a=list(input().replace('0',' ').split()) 
    i=1;s=0
    while len(a)!=0:
        if i%2!=0:
            x=a.index(max(a))
            y=a.pop(x)
            z=len(y)
            s+=len(y)
        else:
            a.pop(a.index(max(a)))
        i+=1
    print(s)

                    