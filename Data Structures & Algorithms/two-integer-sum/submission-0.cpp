class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash_map;

        for (int i = 0; i < nums.size(); i++) {
            int comp = target - nums[i];

            if (hash_map.find(comp) != hash_map.end()) {
                return {hash_map[comp], i};
            }

            hash_map[nums[i]] = i;
        }
        return {};
        
    }
};
