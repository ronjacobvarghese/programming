        
for _ in range(int(input())):
    n=int(input())
    a=list(input().split())
    x=a.count('1');y=a.count('0')

    if a==['1','1']:
        print(n)
        print('1 1')
    elif x>y:
        if x%2==0:
            print(x)
            print('1 '*x)
        else:
            print(x-1)
            print('1 '*(x-1))
    else:
        print(y)
        print("0 "*y)