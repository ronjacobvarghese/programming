n = int(input())
a = list(map(int, input().split()))

if n == 1:
    print('1 1', -a[0], '1 1', '0', '1 1', '0', sep='\n')
    exit(0)

print(1, n)
for i in range(n):
    print(-a[i] * n, end = ' ')
    a[i] -= a[i] * n
print()
print(1, n - 1)
for i in range(n - 1):
    print(-a[i], end = ' ')
    a[i] = 0
print()

print(n, n)
print(-a[n-1])
a[n-1]=0
