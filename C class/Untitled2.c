public static int numWays(int n, int k) {
    if (n == 1) {
        return k;
    }
    int[][] dp = new int[n][k];
    for (int j = 0; j < k; j++) {
        dp[0][j] = 1;
        dp[1][j] = k - 1;
    }
    for (int i = 2; i < n; i++) {
        for (int j = 0; j < k; j++) {
            for (int jp = 0; jp < k; jp++) {
                if (jp != j) {
                    dp[i][j] += dp[i - 1][jp];
                }
            }
            dp[i][j] *= k - 1;
        }
    }
    int ans = 0;
    for (int j = 0; j < k; j++) {
        ans += dp[n - 1][j];
    }
    return ans;
}
