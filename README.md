# 🧬 Longest Common Subsequence (LCS) 💙

Welcome to the **Longest Common Subsequence (LCS)** repository! 🎯 This classic **Dynamic Programming** problem is a favorite in interviews and coding competitions. Let's explore 5 powerful approaches to solve it! 💪

---

## 📘 Problem Statement

Given two strings text1 and text2, return the **length of their longest common subsequence**. A subsequence is a sequence that appears in the same relative order but not necessarily contiguous.

### 💡 Example:

Input: text1 = "abcde", text2 = "ace"
Output: 3
Explanation: The LCS is "ace" ✅

---

## 🧵 Approach 1: Pure Recursion 🌀

### 🔍 Idea:

* Explore **all combinations** by checking each character.
* If characters match ➡️ move both pointers.
* Else ➡️ explore skipping one character from each string.

### ⛔ Drawback:

* **Highly inefficient** for large strings.
* Time Complexity: **O(2^n)** ⏳

---

## 📦 Approach 2: Top-Down DP (Memoization) 🧠

### 💡 Idea:

* Optimize recursion using a **DP table** to store already computed states.
* Avoids redundant calculations 🧮

### ⚡ Complexity:

* Time: **O(n \* m)**
* Space: **O(n \* m)** (for memo table)

---

## 🧱 Approach 3: Bottom-Up DP (Tabulation) 🧊

### 🔍 Idea:

* Build a **2D table** from bottom up.
* dp\[i]\[j] = LCS of first i chars of text1 and j chars of text2

### 🚀 Complexity:

* Time: **O(n \* m)**
* Space: **O(n \* m)**

---

## 🖨️ Approach 4: Bottom-Up DP with Actual Subsequence Printing 🖋️

### ✨ Idea:

* Use the same 2D DP table as the bottom-up approach.
* Maintain an additional 2D table of directions:

  * 'D' (Diagonal): Characters matched
  * 'U' (Up): Skip character from text1
  * 'L' (Left): Skip character from text2
* After filling DP and direction tables, **trace back** from dp\[m]\[n] to build the actual LCS string.

### 📈 Usefulness:

* Returns both the **length** and the **actual LCS string**!
* Helpful in applications like diff tools, DNA sequencing, etc.

### ⚡ Complexity:

* Time: **O(n \* m)**
* Space: **O(n \* m)**

---

## 🧮 Approach 5: Space Optimized DP (Only 2 Rows!) 🧵💼

### 🧠 Idea:

* Realize that each DP row depends only on the **previous row**, so we can keep just two rows and reuse them.
* Use two 1D arrays (or a 2-row 2D array) to alternate between current and previous rows.

### ⚙️ Explanation:

1. Swap strings if `text2` is longer to keep the row array smaller.
2. Iterate over `text1` and `text2`, updating only the current row.
3. Store results in alternating rows and finally return the last computed cell.

### 🌟 Advantages:

* **Saves space** drastically for large inputs!

### 🚀 Complexity:

* Time: **O(n \* m)**
* Space: **O(2 \* min(n, m))** 💾

---

## 📊 Comparison Table

| Approach              | Time Complexity | Space Complexity  | Returns LCS String | Suitable For                  |
| --------------------- | --------------- | ----------------- | ------------------ | ----------------------------- |
| 🌀 Recursion          | O(2^n)          | O(n)              | ❌                  | Small inputs only ⚠️          |
| 🧠 Top-Down DP        | O(n\*m)         | O(n\*m)           | ❌                  | Medium to large ✅             |
| 🧊 Bottom-Up DP       | O(n\*m)         | O(n\*m)           | ❌                  | Large & optimal 💯            |
| 🖋️ Printing DP       | O(n\*m)         | O(n\*m)           | ✅                  | When you need the string ✨    |
| 💼 Space Optimized DP | O(n\*m)         | O(2 \* min(n, m)) | ❌                  | Large inputs, memory bound 🧠 |

---

## 🎓 Final Notes

* LCS is a building block for other problems like:

  * 🔄 Shortest Common Supersequence
  * 🧬 DNA sequence matching
  * 🧾 File comparison
* Practice helps in mastering DP! 🧠🔥

---

## 📜 License

MIT License. Free to use, modify, and share! 💡

---

**Made with ❤️ by Ridham Garg**
