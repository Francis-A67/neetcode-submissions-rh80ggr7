class Solution {
public:
    int trap(vector<int>& height) {
        if (height.empty()) return 0;

        int res = 0;
        int l = 0; 
        int r = height.size() - 1;
        int lMax = height[l];
        int rMax = height[r];

        while (l < r) {
            if (lMax < rMax) {
                l++;
                lMax = std::max(lMax, height[l]);
                res += lMax - height[l];
            } else {
                r--;
                rMax = std::max(rMax, height[r]);
                res += rMax - height[r];
            }
        }

        return res;
    }
};
