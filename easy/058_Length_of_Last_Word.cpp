// Problem: Length of Last Word
//
// Description:
// Given a string s consisting of words and spaces, return the length of the last word in the string.
// A word is a maximal substring consisting of non-space characters only.

//
// Difficulty: Easy
// Link: https://leetcode.com/problems/length-of-last-word/
// Time Complexity: O(n)
// Space Complexity: O(1)
// Runtime: 0ms
// Memory: 8.77 MB

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        for(int i = s.size() - 1; i >= 0; i--) {
            if(s[i] == ' ' && length == 0) continue;
            else if(s[i] == ' ' && length != 0) break;
            length++;
        }
        return length;
    }
};