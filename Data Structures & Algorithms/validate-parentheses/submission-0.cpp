class Solution {
public:
    bool isValid(string s) {
        unordered_map<char,char> hash_map {{'(',')'}, {'{','}'}, {'[',']'}};
        stack<char> my_stack;

        for (char c : s) {
            if(hash_map.count(c)) {
                my_stack.push(c);
            } else {
                if (my_stack.empty() || hash_map[my_stack.top()] != c) {
                    return false;
                }
                my_stack.pop();
            }
        }
        return my_stack.empty();
    }
};
