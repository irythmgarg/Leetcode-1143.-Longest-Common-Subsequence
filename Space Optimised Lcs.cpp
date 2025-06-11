class Solution {
public:
    /**
     * Function to compute the length of the Longest Common Subsequence (LCS)
     * using space optimization (only 2 rows instead of a full 2D matrix).
     * 
     * @param text1 First input string
     * @param text2 Second input string
     * @return Length of the longest common subsequence
     */
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();

        // Always use the smaller string as the second dimension to optimize space
        if (n > m) {
            return longestCommonSubsequence(text2, text1);
        }

        // Initialize a 2-row DP array, as we only need current and previous rows
        int dp[2][n + 1];

        // Initialize first row to 0 (base case for empty string)
        for (int i = 0; i <= n; i++)
            dp[0][i] = 0;
        
        // Explicitly set the start of the second row
        dp[1][0] = 0;

        // Iterate through all characters of text1 and text2
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                // If characters match, take diagonal value + 1
                if (text1[i - 1] == text2[j - 1])
                    dp[1][j] = dp[0][j - 1] + 1;
                else
                    // Otherwise, take max from top or left
                    dp[1][j] = max(dp[0][j], dp[1][j - 1]);
            }

            // Copy current row to previous row for next iteration
            for (int j = 1; j <= n; j++) {
                dp[0][j] = dp[1][j];
            }
        }

        // The result is in the last cell of the current row
        return dp[1][n];
    }
};
