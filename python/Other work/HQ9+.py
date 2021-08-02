a=list(input().replace('',' ').split());c=0
for i in a:
    if i in ['H','Q','9']:
        c=+1
        break
if c==1:
    print('YES')
else:
    print('NO')
