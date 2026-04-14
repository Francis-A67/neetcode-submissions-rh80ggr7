class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int>hash_map;
        unordered_map<char, int>hash_map2;

        if (s.size() != t.size()) {
            return false;
        }

        for (int i = 0; i < s.size(); i++) {
            hash_map[s[i]] = 1 + hash_map[s[i]];
            hash_map2[t[i]] = 1 + hash_map2[t[i]];
        }

        for (char c: s) {
            if (hash_map[c] != hash_map2[c]) {
                return false;
            }
        }
    
        return true;
    }
};
