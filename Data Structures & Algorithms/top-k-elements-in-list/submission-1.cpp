class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int>hash;
        vector<vector<int>> buckets(nums.size() + 1);
        vector<int> result;

        for (int i : nums) {
            hash[i]++;
        }
        
        for (auto& pair : hash) {
            int number = pair.first;
            int fequency = pair.second;

            buckets[fequency].push_back(number);
        }
        
        for (int i = buckets.size() - 1; i >= 0 && result.size() < k; i--) {
            for (int num : buckets[i]) {
                if (result.size() < k) {
                    result.push_back(num);
                }   
            }
        }

        return result;
    }
};
