a=int(input())
b=a**(1/2)//1
if b==a**(1/2):
    print('%d'%(b*4))
else:
    while a%b!=0:
        b=b+1
    d=a/b
    print('%d'%(2*(d+b)))
         
