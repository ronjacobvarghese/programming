a=int(input())
c=list(str(a).replace('',' ').split())
if set(c)=={'4','7'}:
    print('YES')
elif a%4==0 or a%7==0 or a%47==0:
    print('YES')
else:
    print('NO')
