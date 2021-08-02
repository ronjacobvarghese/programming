for i in range(int(input())):
    x,y = map(int,input().split())
    if x==2 and y<4:
        print('YES')
    else:
        if x==y or x>y :
            print('YES')
        elif x>=4:
            print('YES')
        elif y>x :
            print('NO')
        

