class Solution {
    public int[] productExceptSelf(int[] nums) {
        
        int[] suffix = new int[nums.length];
        int[] prefix = new int[nums.length];

        int suffixSum = 1;
        int prefixSum = 1;

        for (int i = 0; i < nums.length; i++) {
            prefixSum *= nums[i];
            prefix[i] = prefixSum;

            suffixSum *= nums[nums.length-1 - i];
            suffix[nums.length-1-i] = suffixSum;

        }


        for (int i = 0; i < nums.length; i++) {
            if (i == 0) {
                nums[i] = suffix[1];
            }
            else if (i == nums.length-1){
                nums[i] = prefix[nums.length-2];
            }
            else {
                nums[i] = prefix[i-1] * suffix[i+1];
            }
        }

        return nums;
    }
}  
