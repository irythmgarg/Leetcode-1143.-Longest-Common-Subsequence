class Solution {
public:
    // Recursive function to compute the length of LCS
    int hlo(string &text1, string &text2, int i, int j) {
        // Base case: if we reach the end of either string, LCS is 0
        if (i >= text1.length() || j >= text2.length()) {
            return 0;
        }

        int take = 0;

        // If characters match, include this character and move to next indices in both strings
        if (text1[i] == text2[j]) {
            take = 1 + hlo(text1, text2, i + 1, j + 1);
        }

        // Option 1: Skip current character of text1
        int nottake1 = hlo(text1, text2, i + 1, j);

        // Option 2: Skip current character of text2
        int nottake2 = hlo(text1, text2, i, j + 1);

        // Return the maximum of all possible options
        return max({take, nottake1, nottake2});
    }

    int longestCommonSubsequence(string text1, string text2) {
        // Start recursion from index 0 of both strings
        return hlo(text1, text2, 0, 0);
    }
};
