class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {

        sort(nums.begin(), nums.end());
        int allNumCount = nums.size();

        for ( int i = 1; i < allNumCount; i++ )
        {
            if (nums[i] == nums[i-1])
                return true;
        }
        return false;
    }
};
