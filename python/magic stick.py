for i in range(int(input())):
    x,y = map(int,input().split())
    t=x
    if x==y or x>y:
        print('YES')
    elif x<=1 :
        print('NO')
    elif x%2!=0 and (3*(x-1)/2)>t:
        print('YES')
    elif x%2==0 and (3*x/2)>t:
        print('YES')
    else:
        print('NO')

