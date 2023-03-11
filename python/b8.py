def count_subsets_with_sum(arr, k, s):
    n = len(arr)
    dp = [[0] * (s+1) for _ in range(k+1)]
    dp[0][0] = 1
    for i in range(1, k+1):
        for j in range(1, s+1):
            if j < arr[i-1]:
                dp[i][j] = dp[i-1][j]
            else:
                dp[i][j] = dp[i-1][j-arr[i-1]] + dp[i-1][j]
    return dp[k][s]

def solve():
    # n,k,s from input
    n,k,s = map(int, input().split())
    # arr from input
    arr = list(map(int, input().split()))
    # print result
    print(count_subsets_with_sum(arr, k, s))

def main():
    # for _ in range(int(input())):
    solve()
    

    
