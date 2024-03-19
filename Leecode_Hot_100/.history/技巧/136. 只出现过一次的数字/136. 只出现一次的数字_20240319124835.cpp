class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        // 按位异或，相同元素异或为0
        int x = 0;
        for (int num : nums)
            x ^= num;
        return x;
    }
};