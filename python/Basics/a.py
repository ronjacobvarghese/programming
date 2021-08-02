t = int(input())
for i in range(t):
    a, b, c = map(int, input().split())
    lst = sorted([a, b, c])
    a = lst[-1]
    b = lst[-2]
    c = lst[-3]
    if a > 2*c:
        print("NO")
    else:
        if (a + b + c) % 4 == 0:
            if b<=3*c-a:
                print("YES")
            else:
                print("NO")
        else:
            print("NO")
