class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> numSet{nums.begin(), nums.end()};
        int longestlenght = 0;

        for (int i : numSet) {
            if (not numSet.count(i - 1)){
                int longest = 0;
                while (numSet.count(i + longest)) {
                    longest += 1;
                }
                longestlenght = max(longestlenght, longest);
            }
        }
      
        return longestlenght;
    }
};
