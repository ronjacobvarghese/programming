def solve(p, i):
  pos = p[i]
  ans = 1
  while pos!=i:
    ans += 1
    pos = p[pos]
    
  return ans


q = int(input())
for i in range(q):
  n = int(input())
  arr = list(int(x)-1 for x in input().split())
  for i in range(0, n):
    print(solve(arr,i), end = " ")
  print()

 
