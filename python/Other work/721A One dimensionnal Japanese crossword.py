n=int(input())
a=input();b=[];r=0;s=0
if set(a)=={'W'}:
    print(0)
else:
    for i in a:
        if i=='B':
            s+=1
        if i=='W':
            if s!=0:
                r+=1
                b.append(s)
                s=0
    if s!=0:
        r+=1
        b.append(s)
    print(r)
    print(*b)
    print(a.split('W'))
