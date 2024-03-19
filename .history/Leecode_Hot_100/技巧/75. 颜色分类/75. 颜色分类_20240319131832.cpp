class Solution {
public:
    void sortColors(vector<int>& nums) {
        int len = nums.size();
        if (len < 2) return;
        int zero = 0, two = len;
        int i = 0;
        while(i < two)
        {
            if(nums[i] == 0)
            {
                swap(nums[zero], nums[i]);
                zero++;
                i++;
            }
            else if(nums[i] == 1) i++;
            else
            {
                two--;
                swap(nums[i], nums[two]);
            }        
        }

    }
};