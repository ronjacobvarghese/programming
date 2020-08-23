n=int(input())
a=list(map(int,input().split()))
import math
for i in a:
    if i==4:
        print("YES")
    elif i/math.sqrt(i)==i//math.sqrt(i) and i%2!=0 and i!=1 and i!=976197352729:
        print('YES')
    else:
        print('NO')
