class Solution {
public:
    void dfs(int index, int target, vector<int>& subnet, vector<vector<int>>& res, const vector<int>& nums) {
        int sum = 0;
        for (const int& n : subnet) {
            sum += n;
        }
        
        if (sum > target) return;

        if (index >= nums.size()) return;

        if (sum == target) {
            res.push_back(subnet);
            return;
        }

        dfs(index + 1, target, subnet, res, nums);
        
        subnet.push_back(nums[index]);
        dfs(index, target, subnet, res, nums);
        subnet.pop_back();
    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        std::vector<vector<int>> res;
        std::vector<int> subnet;
        dfs(0, target, subnet, res, nums);
        return res;
    }
};
