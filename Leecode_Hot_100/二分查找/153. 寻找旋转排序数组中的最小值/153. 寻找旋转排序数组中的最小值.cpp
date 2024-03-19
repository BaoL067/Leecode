class Solution {
public:
    int findMin(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        int mid;
        while(left < right)
        {
            mid = left + (right - left) / 2;
            if (nums[mid] > nums[right]) left = mid + 1;  // 中值 > 右值，说明最小值在右半段
            else right = mid;                             // 中值 < 右值，说明最小值在左半段且中值也可能是最小值，收缩区间
        }
       return nums[left];
    }
};