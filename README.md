# Leetcode-1143.-Longest-Common-Subsequence
# 🧬 Longest Common Subsequence (LCS) 💙

Welcome to the **Longest Common Subsequence (LCS)** repository! 🎯 This classic **Dynamic Programming** problem is a favorite in interviews and coding competitions. Let's explore 3 powerful approaches to solve it! 💪

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

## 📊 Comparison Table

| Approach        | Time Complexity | Space Complexity | Suitable For         |
| --------------- | --------------- | ---------------- | -------------------- |
| 🌀 Recursion    | O(2^n)          | O(n)             | Small inputs only ⚠️ |
| 🧠 Top-Down DP  | O(n\*m)         | O(n\*m)          | Medium to large ✅    |
| 🧊 Bottom-Up DP | O(n\*m)         | O(n\*m)          | Large & optimal 💯   |

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
