class Solution {
public:
    // Memoization table to store intermediate LCS results
    int t[1001][1001];

    // Recursive function to compute LCS from indices i (text1) and j (text2)
    int hlo(string &text1, string &text2, int i, int j) {
        // Base case: if either string is fully traversed, LCS is 0
        if (i >= text1.length() || j >= text2.length()) {
            return 0;
        }

        // If result is already computed, return it from memo table
        if (t[i][j] != -1)
            return t[i][j];

        int take = 0;

        // If characters match, include it in LCS and move to next indices
        if (text1[i] == text2[j]) {
            take = 1 + hlo(text1, text2, i + 1, j + 1);
        }

        // Option 1: skip character from text1
        int nottake1 = hlo(text1, text2, i + 1, j);

        // Option 2: skip character from text2
        int nottake2 = hlo(text1, text2, i, j + 1);

        // Store the maximum among the three options in memo table and return
        return t[i][j] = max({take, nottake1, nottake2});
    }

    // Main function to initialize and call the recursive LCS computation
    int longestCommonSubsequence(string text1, string text2) {
        // Initialize memoization table with -1 (uncomputed)
        memset(t, -1, sizeof(t));

        // Start recursion from beginning of both strings
        return hlo(text1, text2, 0, 0);
    }
};
