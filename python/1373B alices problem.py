for i in range(int(input())):
    a=input()
    t=len(a)
    s=0
    while(t!=0):
        a=a.replace('01','a')
        a=a.replace('10','a')
        if 'a' not in a:
            break
        else:
            t-=2*a.count('a')
            s+=a.count('a')
            a=a.replace('a','')
    if s%2==0:
        print('NET')
    else:
        print('DA')
        
        
