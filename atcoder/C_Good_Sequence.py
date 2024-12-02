n = int(input())
arr = map(int, input().split())
dict = {}

for i in arr:
  if i in dict:
    dict[i] += 1
  else:
    dict[i] = 1

ans = 0
for key, value in dict.items():
  if key < value:
    ans += (value - key)
  elif key > value:
    ans += value

print(ans)