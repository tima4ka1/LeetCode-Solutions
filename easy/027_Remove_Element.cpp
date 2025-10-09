// Problem: Remove Element
//
// Description:
// Given an integer array nums and an integer val, remove all occurrences of val in nums in-place.
// The order of the elements may be changed. Then return the number of elements in nums which are not equal to val.
// Consider the number of elements in nums which are not equal to val be k, to get accepted, you need to do the following things:
// Change the array nums such that the first k elements of nums contain the elements which are not equal to val.
// The remaining elements of nums are not important as well as the size of nums.
// Return k.

//
// Difficulty: Easy
// Link: https://leetcode.com/problems/remove-element/
// Time Complexity: 0(n)
// Space Complexity: 0(1)
// Runtime: 0ms
// Memory: 11.74 MB

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int write = 0, read;
        for (read = 0; read < nums.size(); read++) {
            if(nums[read] != val) {
                nums[write] = nums[read];
                write++;
            }
        }
        return write;
    }
};