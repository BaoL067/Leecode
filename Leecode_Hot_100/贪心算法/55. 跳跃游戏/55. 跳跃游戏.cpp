class Solution {
public:
    bool canJump(vector<int>& nums) {
        int k = 0;  // 记录当前所能到达的最大距离
        for (int i = 0; i < nums.size(); i++)
        {
            if(i > k) return false;  // 若当前点比前面能到达的最大距离还大，返回false
            k = max(k, i + nums[i]);
        }
        return true;
    }
};