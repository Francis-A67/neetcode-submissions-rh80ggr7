class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int>myMap = {};

        for(int i = 0; i < nums.size(); i++) {
            int comp = target - nums[i];
            
            if (myMap.find(comp) != myMap.end()) {
                return {myMap[comp], i};
            }

            myMap.try_emplace(nums[i], i);
        }

        return {};
    }
};
