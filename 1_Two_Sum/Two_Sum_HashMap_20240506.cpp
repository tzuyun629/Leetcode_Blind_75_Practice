class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        vector<int> res;
        unordered_map<int, int> map;
        int key = 0; // 另一半，element
        
        for (int i = 0; i < nums.size(); i++)
        {
            key = target - nums[i];
	        if ( !map.count(key) ) // 沒有找到另一半。註：count()用法要熟悉
	        {
                map[nums[i]] = i; // 把這個數字，和它對應到的index，存在map裡面
	        }
	        else // 找到另一半
	        {
                return {map[key], i}; // 回傳答案
	        }
        }
        
        return res; // 找不到答案，回傳空的array
    }
};
