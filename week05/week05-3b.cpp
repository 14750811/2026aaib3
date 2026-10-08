// week05-3b.cpp 學習計畫 Built-in Functions 第1題
// LeetCode 58. Length of Last Word 最後那個字，有幾個字母
class Solution {
public:
    int lengthOfLastWord(string s) {
        // 要用 stringstream 之前，要先 #include <stringstream>
        stringstream ss(s); // week05 string字串stream串流 (cin也是stream)
        // week04 C++ 的圓括號是丟進去物件 初始化 的參數
        string ans; // week02 C++ 字串的宣告
        while(ss >> ans) { // 今天 week05.cpp 有用到 很像 cin 的 iostream
            // 什麼都不做
        }
        return ans.length(); // week01 week02 字串的長度
    }
};
