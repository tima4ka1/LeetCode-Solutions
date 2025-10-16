// Problem: Find Words Containing Character
//
// Description:
// You are given a 0-indexed array of strings words and a character x.
// Return an array of indices representing the words that contain the character x.
// Note that the returned array may be in any order.
//
// Difficulty: Easy
// Link: https://leetcode.com/problems/find-words-containing-character/description/
// Time Complexity: O(n * k)
// Space Complexity: O(n)
// Runtime: 0ms
// Memory: 33.07 MB

class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> out;
        for(int i = 0; i < words.size(); i++) {
            if(words[i].find(x) != string::npos) {
                out.push_back(i);
            }
        }
        return out;
    }
};