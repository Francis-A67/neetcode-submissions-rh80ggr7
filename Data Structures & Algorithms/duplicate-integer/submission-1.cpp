class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
      std::unordered_set<int> mySet;

      for(const int& num : nums) {
        if (mySet.count(num)) {
            return true;
        }
        mySet.insert(num);
      }
        return false;
    }
};