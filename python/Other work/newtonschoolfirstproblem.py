a,b=map(int,input().split())
if b%(2**(a-1))==0:
    print(b//(2**(a-1)))
else:
    i=1
    while i*(2**(a-2))!=b:
        i+=1
    print((1000000007+i)//2)