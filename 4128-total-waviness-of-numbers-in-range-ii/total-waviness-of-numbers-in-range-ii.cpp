class Solution {
public:
    struct Node {
        long long cnt;
        long long wav;
    };

    string s;
    Node dp[20][2][2][11][11];
    bool vis[20][2][2][11][11];

    Node dfs(int pos, int tight, int started, int last1, int last2) {
        if (pos == (int)s.size()) {
            return {1, 0};
        }

        if (vis[pos][tight][started][last1][last2])
            return dp[pos][tight][started][last1][last2];

        vis[pos][tight][started][last1][last2] = true;

        Node res = {0, 0};
        int limit = tight ? s[pos] - '0' : 9;

        for (int d = 0; d <= limit; d++) {
            int ntight = tight && (d == limit);

            if (!started && d == 0) {
                Node nxt = dfs(pos + 1, ntight, 0, 10, 10);
                res.cnt += nxt.cnt;
                res.wav += nxt.wav;
            } else {
                int extra = 0;

                if (started && last2 != 10) {
                    if ((last1 > last2 && last1 > d) ||
                        (last1 < last2 && last1 < d)) {
                        extra = 1;
                    }
                }

                int nlast2 = started ? last1 : 10;
                int nlast1 = d;

                Node nxt = dfs(pos + 1, ntight, 1, nlast1, nlast2);

                res.cnt += nxt.cnt;
                res.wav += nxt.wav + 1LL * extra * nxt.cnt;
            }
        }

        return dp[pos][tight][started][last1][last2] = res;
    }

    long long solve(long long n) {
        if (n <= 0) return 0;

        s = to_string(n);
        memset(vis, 0, sizeof(vis));

        return dfs(0, 1, 0, 10, 10).wav;
    }

    long long totalWaviness(long long num1, long long num2) {
        return solve(num2) - solve(num1 - 1);
    }
};