// week05-2.cpp 學習計畫 Built-in Functions 第2題
// LeetCode 709. To Lower Case
class Solution {
public:
    string toLowerCase(string s) {
        // week02 教過字串 s 的長度 .length()
        for (int i=0; i< s.length(); i++) { // 逐字母處理
            if ( isupper(s[i]) ) s[i] = s[i] - 'A' + 'a';
        }// s[0] = 'h'; //先試試看吧(看起來是錯的) 教你s[i]
        return s; // 直接送出去
    }
};
