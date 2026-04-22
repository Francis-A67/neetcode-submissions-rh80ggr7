class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int longest = 0;
        std::unordered_set<char> mySet;
        
        for (r; r < s.size(); r++) {
            while (mySet.contains(s[r])) {
                mySet.erase(s[l]);
                l++;
            }

            mySet.insert(s[r]);
            
            int length = (r - l) + 1;
            longest = std::max(longest, length);
        }
       
        return longest;
    }
};
