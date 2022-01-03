// DECODE_STRING_WAYS
public:
int CountWays(string str)
{
    int n = str.length();

    vector<int> dp(n + 1, 1);
    int mod = 1e9 + 7;
    if (n == 0 || str[0] == '0')
    {
        return 0;
    }
    for (int i = 2; i <= n; i++)
    {
        if (str[i - 1] == '0')
        {
            dp[i] = 0;
        }
        else
        {
            dp[i] = dp[i - 1] % mod;
        }

        if (str[i - 2] == '1' || str[i - 2] == '2' && str[i - 1] <= '6')
        {
            dp[i] += dp[i - 2] % mod;
        }
    }
    return dp[n] % mod;
    // Code here
}
};

// TIME COMPLEXITY:O(N)
// SPACE COMPLEXITY:o(N)

