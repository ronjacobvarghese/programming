for i in range(int(input())):
    n=int(input())
    a=[];b=[];d=[];e=[]
    while n!=0:
        a.append(n)
        b.append(n%10)
        n=n//10
    if sum(b)>=100:
        d.append(b)
        e.append(b%10)
        b=b//10
    if sum(b)>=100:
        print(sum(a)+sum(b)+sum(e)//10)
    else:
        print(sum(a)+sum(b)//10)
        
