//Given an array of integers, return indices of the two numbers such that they add up to a specific target.

//You may assume that each input would have exactly one solution, and you may not use the same element twice.

class Solution {
public:
     vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vect;
        for (int init = 1; init < nums.size(); init++) {
            if ((target - nums[init]) == nums[init - 1]) {
                vect.push_back(init - 1);
                vect.push_back(init);
                return vect;
            }
        }
        return vect;
    }
};
