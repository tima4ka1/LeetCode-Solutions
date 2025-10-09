// Problem: Remove Duplicates from Sorted Array
//
// Description:
// Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that 
// each unique element appears only once. The relative order of the elements should be kept the same.
// Then return the number of unique elements in nums.
// Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:
// Change the array nums such that the first k elements of nums contain the unique elements in the order they 
// were present in nums initially. The remaining elements of nums are not important as well as the size of nums.
// Return k.
//
// Difficulty: Easy
// Link: https://leetcode.com/problems/remove-duplicates-from-sorted-array/
// Time Complexity: O(n)
// Space Complexity: O(1)
// Runtime: 0ms
// Memory: 22.66 MB

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int write = 0, read, k;
        for (read = 1; read < nums.size(); read++) {
            if(nums[read] != nums[write]) {
                nums[write + 1] = nums[read];
                write++;
            }
        }
        k = write + 1;
        return k;
    }
};