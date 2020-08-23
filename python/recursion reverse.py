def rec(k,n):
    if(k==0):
        return ;
    else:
        print(k//10**(n-1),end='');
        rec(k%(10**(n-1)),n-1);
k=int(input())
n=int(input())
rec(k,n)
