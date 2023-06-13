
n = int(input())
a = input().split()
s = set()
def rec(i, str):
    if(i == n): return
    for j in range(i, n):
        _str = str + a[j]
        s.add(_str)
        rec(j+1, _str)
rec(0, '')
print('\n'.join(sorted(s)))
