class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int slow = 0, fast = 0;
        while(fast < nums.size())
        {
            if (nums[fast] != 0)
            {
                swap(nums[fast], nums[slow]);
                slow += 1;
            }
            fast += 1;
        }
    }
};