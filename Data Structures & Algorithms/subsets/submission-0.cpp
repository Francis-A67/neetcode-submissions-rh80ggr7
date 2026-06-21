class Solution {
public:
    void dfs(int index, vector<int>& subnet, vector<vector<int>>& res, const vector<int>& nums) {
    if (index == nums.size()) {
        res.push_back(subnet);
        return;
    }
    dfs(index + 1, subnet, res, nums);
    
    subnet.push_back(nums[index]);
    dfs(index + 1, subnet, res, nums);
    subnet.pop_back();
}

    vector<vector<int>> subsets(vector<int>& nums) {
        std::vector<vector<int>> res;
        std::vector<int> subnet;
        dfs(0,  subnet, res, nums);
        return res;
    }
};
