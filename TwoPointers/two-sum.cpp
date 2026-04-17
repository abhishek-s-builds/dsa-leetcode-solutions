class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;

        for(int i=0;i<nums.size();i++){
            int rem = target - nums[i];

            if(mp.count(rem)){
                return {mp[rem], i};
            }

            mp[nums[i]] = i;
        }

        return {};
    }
};           

// Problem: Two Sum
// Pattern: Hashing / Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(n)
// Link: https://leetcode.com/problems/two-sum/
