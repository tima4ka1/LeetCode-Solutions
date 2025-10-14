// Problem: Find Resultant Array After Removing Anagrams
//
// Description:
// You are given a 0-indexed string array words, where words[i] consists of lowercase English letters.
// In one operation, select any index i such that 0 < i < words.length and words[i - 1] and words[i] are anagrams,
// and delete words[i] from words. Keep performing this operation as long as you can select an index that satisfies
// the conditions.
// Return words after performing all operations. It can be shown that selecting the indices for each operation in any 
// arbitrary order will lead to the same result.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase using all the original 
// letters exactly once. For example, "dacb" is an anagram of "abdc".
//
// Difficulty: Easy
// Link: https://leetcode.com/problems/find-resultant-array-after-removing-anagrams/
// Time Complexity: O(n * m log m)
// Space Complexity: O(n * m)
// Runtime: 0ms
// Memory: 16.72 MB

class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        int write = 0, read = 1;
        vector<string> sortedWords(words.size());
        for(int i = 0; i < words.size(); i++) {
            string s = words[i];
            sort(s.begin(), s.end());
            sortedWords[i] = s;
        }
        for(int i = read; i < words.size(); i++) {
            if (sortedWords[write] != sortedWords[read]) {
                write++;
                words[write] = words[read];
                sortedWords[write] = sortedWords[read];
            }
            read++;
        }
        words.resize(write + 1);
        return words;
    }
};