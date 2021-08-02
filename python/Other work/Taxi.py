n=int(input())
a=list(map(int,input().split()))
s=a.count(3)
b=a.count(1)
c=a.count(2)
if b>s:
    b-=s
else:
    b=0
if b%2==0:
    c+=b//2
else:
    c+=(b-1)//2
    s+=1   
if c%2!=0 and b%2==0:
    print(s+c//2+1+a.count(4))
else:
    print(s+c//2+a.count(4))
    
    



    


    



