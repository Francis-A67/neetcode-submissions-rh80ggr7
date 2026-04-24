class Solution {
public:
    int characterReplacement(string s, int k) {
       std::unordered_map<char, int> myMap;
       int l = 0, r = 0;
       int res = 0;
       int maxCount = 0;

       for (r; r < s.size(); r++) {
        myMap[s[r]]++;
        maxCount = std::max(maxCount, myMap[s[r]]);

        while ((r - l + 1) - maxCount > k) {
            myMap[s[l]]--;
            l++;
        }
        res = std::max(res, (r - l) + 1); 
       } 
       return res;
    }
};
