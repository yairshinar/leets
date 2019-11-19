//Given an array of integers, return indices of the two numbers such that they add up to a specific target.

//You may assume that each input would have exactly one solution, and you may not use the same element twice.
//On**2
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

//On 
class Solution {
public:

    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> vect;
        map<int, int> umap;
        map<int, int>::iterator it = umap.begin();

        for (int init = 0; init < nums.size(); init++) {
            it = umap.find(target - nums[init]);
            if (it != umap.end() && umap[target - nums[init]] != init) {

                vect.push_back(init);
                vect.push_back(umap[target - nums[init]]);

                return vect;

            }
            umap.insert(pair<int, int>(nums[init], init));
            
        }
             
       
        return vect;
    }
};
