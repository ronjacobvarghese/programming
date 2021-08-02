for i in range(int(input())):
    a=str(input())
    if len(a)<=10:
         print(*a,sep='')
    else:
        print(a[0],len(a[1:(len(a)-1)]),a[len(a)-1],sep='')
