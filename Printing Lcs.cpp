class Solution {
public:
    /**
     * Function to find the length of the Longest Common Subsequence (LCS)
     * between two given strings, and also print the actual LCS.
     *
     * @param text1 First input string
     * @param text2 Second input string
     * @return Length of the longest common subsequence
     */
    int longestCommonSubsequence(string text1, string text2) {
        int m = text1.length();
        int n = text2.length();

        // dp[i][j] will store the length of LCS of text1[0...i-1] and text2[0...j-1]
        int dp[m + 1][n + 1];

        // finalans[i][j] stores the direction of the choice made:
        // 'D' for diagonal (match), 'U' for up, 'L' for left
        char finalans[m + 1][n + 1];

        // Initialize first row and column with 0 (base case of empty string)
        for (int i = 0; i <= m; i++)
            dp[i][0] = 0;
        for (int i = 0; i <= n; i++)
            dp[0][i] = 0;

        // Fill the dp and finalans tables
        for (int i = 1; i <= m; i++) {
            for (int j = 1; j <= n; j++) {
                if (text1[i - 1] == text2[j - 1]) {
                    // Characters match: move diagonally and add 1
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                    finalans[i][j] = 'D'; // diagonal
                } else {
                    // Characters don't match: take max of top or left cell
                    if (dp[i - 1][j] > dp[i][j - 1]) {
                        dp[i][j] = dp[i - 1][j];
                        finalans[i][j] = 'U'; // up
                    } else {
                        dp[i][j] = dp[i][j - 1];
                        finalans[i][j] = 'L'; // left
                    }
                }
            }
        }

        // Reconstruct the LCS using the finalans table
        int i = m;
        int j = n;
        string ans = "";

        while (i > 0 && j > 0) {
            if (finalans[i][j] == 'D') {
                ans = text1[i - 1] + ans; // include character from both strings
                i--;
                j--;
            } else if (finalans[i][j] == 'U') {
                i--; // move up
            } else {
                j--; // move left
            }
        }

        // Output the LCS string (optional)
        cout << "LCS: " << ans << endl;

        // Return the length of the longest common subsequence
        return dp[m][n];
    }
};
