for i in range(int(input())):
    a,b=map(int,input().split())
    i,s=0,0
    if a%b==0:
        print(a)
    elif a<b:
        print(a)
    elif a%b!=0 :
        x=a%b
        print((a-x)+b//2)
    else:
        print(a)
        
