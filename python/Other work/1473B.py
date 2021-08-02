def compute_lcm(x, y):

    # choose the greater number
    if x > y:
        greater = x
    else:
        greater = y

    while(True):
        if((greater % x == 0) and (greater % y == 0)):
            lcm = greater
            break
        greater += 1

    return lcm


for _ in range(int(input())):
    a = input()
    b = input()
    if(len(a)>len(b)):
        x=a.count(b)
    else:
        x=b.count(a)
    if(len(b)*x == len(a) or len(a)*x==len(b)):
        if(len(a)<len(b)):
            print(a*(compute_lcm(len(a),len(b))//len(a)))
        else:
            print(b*(compute_lcm(len(a),len(b))//len(b)))

    else:
        print(-1)