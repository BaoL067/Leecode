class Solution {
public:
    void sortColors(vector<int>& nums) {
        int zero = 0, two = nums.size() - 1;
        int i = 0;
        while(i <= two)
        {
            if(nums[i] == 0)
            {
                swap(nums[zero], nums[i]);
                zero += 1;
                i += 1;
            }
            else if(nums[i] == 1) i += 1;
            else
            {
                swap(nums[two], nums[i]);
                two -= 1;
            }
        }

    }
};