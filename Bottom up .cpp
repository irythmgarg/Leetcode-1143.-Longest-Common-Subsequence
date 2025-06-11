class Solution {
public:

    /**
     * @brief Computes the length of the Longest Common Subsequence (LCS) between two strings.
     * 
     * @param text1 The first input string.
     * @param text2 The second input string.
     * @return int The length of the LCS between text1 and text2.
     */
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();

        // Declare a 2D DP table where dp[i][j] stores the length of LCS of
        // text1[0..i-1] and text2[0..j-1]
        int dp[m + 1][n + 1];

        // Initialize the first row and column to 0
        // LCS with an empty string is 0
        for (int i = 0; i <= m; i++)
            dp[i][0] = 0;

        for (int j = 0; j <= n; j++)
            dp[0][j] = 0;

        // Fill the DP table using bottom-up approach
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                // If characters match, extend the LCS
                if (text1[i - 1] == text2[j - 1]) {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                } else {
                    // If not matching, take the maximum of excluding current char
                    // from either text1 or text2
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        // The value at dp[m][n] contains the length of the LCS
        return dp[m][n];
    }
};
