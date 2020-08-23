a=input();b=input()
print('YES' if str(int(a)+int(b)).replace('0','')==str(int(a.replace('0',''))+int(b.replace('0',''))) else 'NO')
