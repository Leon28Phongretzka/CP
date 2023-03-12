#include <bits/stdc++.h>
using namespace std;

int dp[1005];
int a[1005];

int main()
{
    int n, limit;
    cin >> n >> limit;

    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }

    dp[0] = 0;
    for (int i = 1; i <= n; i++)
    {
        dp[i] = dp[i - 1]; // không lấy phần tử thứ i

        for (int j = i; j >= 1; j--)
        {
            int sum = 0;
            for (int k = j; k <= i; k++)
            {
                sum += a[k];
            }
            if (sum <= limit)
            {
                dp[i] = max(dp[i], dp[j - 1] + sum); // lấy phần tử thứ i
            }
        }
    }

    cout << dp[n] << endl; // kết quả là tổng lớn nhất của các phần tử không vượt quá giới hạn limit

    return 0;
}
