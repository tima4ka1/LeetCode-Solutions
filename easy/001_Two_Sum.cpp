// Problem: Two Sum
//
// Description:
// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.
//
// Difficulty: Easy
// Link: https://leetcode.com/problems/two-sum/description/
// Time Complexity: O(n^2)
// Space Complexity: O(1)
// Runtime: 45ms
// Memory: 13.99 MB

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i, k;
        for(i = 0; i < nums.size(); i++) {
            for(k = i + 1; k < nums.size(); k++) {
                if(nums[i] + nums[k] == target) {
                return {i, k};
            }
            }
        }
        return {0};
    }
};