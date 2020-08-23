a,b=map(int,input().split())
print(a*(b//5+1)-a//5 if b%5!=0 else a*b//5 -a//5)
        

