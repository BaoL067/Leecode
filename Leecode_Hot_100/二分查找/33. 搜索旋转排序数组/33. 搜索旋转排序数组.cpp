class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int mid;
        if(target < nums[0]) target += 10001;
        while(left <= right)
        {
            mid = left + (right - left) / 2;
            if(nums[mid] < nums[0])
            {
                nums[mid] += 10001;
            }
            if(nums[mid] == target) return mid;
            if(nums[mid] > target) right = mid - 1;
            else left = mid + 1;
        }
        return -1;
    }
};