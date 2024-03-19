class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int fast = 0, slow = 0;
        while(true)
        {
            fast = nums[nums[fast]];
            slow = nums[slow];
            if (fast == slow) break;
        }
        int finder = 0;
        while(true)
        {
            finder = nums[finder];
            slow = nums[slow];
            if(slow == finder) break;
        }
        return slow;
    }
};