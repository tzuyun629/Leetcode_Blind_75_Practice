class Solution {
public:
    vector<int> twoSum(vector<int> &nums, int target) {
        unordered_map<int, int> hash; // 宣告hash table
        
        for (int i = 0; i < nums.size(); ++i) // loop 所有數字
        {
            int num_2 = target - nums[i]; // num_2和nums[i]相加為target
            
            if (hash.find(num_2) != hash.end()) // num_2已經在hash table中
            {
                return {hash[num_2], i}; // 回傳 {num_2 在hash table的index, i}
            }
            
            hash[nums[i]] = i; // num_2不在hash table，則加入nums[i]的index到hash table中
        }
        return {};
    }
};
