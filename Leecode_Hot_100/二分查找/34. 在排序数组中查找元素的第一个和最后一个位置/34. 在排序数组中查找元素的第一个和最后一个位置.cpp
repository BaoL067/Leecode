class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0, right = nums.size() - 1;
        int mid;
        while(left <= right)
        {
            mid = left + (right - left) / 2;
            if(nums[mid] < target)
                left = mid + 1;
            else if(nums[mid] > target)
                right = mid - 1;
            else
                break;
        }
        if(left > right)
            return {-1, -1};
        int first = mid, last = mid;
        while(first > 0 && nums[first] == nums[first - 1])
        {
            first -= 1;
        }
        while(last < nums.size() - 1 && nums[last] == nums[last + 1])
        {
            last += 1;
        }
        return {first, last};
    }
};