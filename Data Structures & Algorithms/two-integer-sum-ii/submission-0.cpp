class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int, int> hashMap;

        for(int i = 0; i < numbers.size(); i++) {
            int comp = target - numbers[i];

            if(hashMap.find(comp) != hashMap.end()) {
                return {hashMap[comp] + 1, i + 1};
            }

            hashMap[numbers[i]] = i;
        }

       return {};
    }
};
