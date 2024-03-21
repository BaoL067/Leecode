class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> visited;
        for(int index = 0; index < nums.size(); index ++)
        {
            int value = nums[index];
            if(visited.find(target - value) != visited.end())
                return {index, visited[target - value]};
            else visited[value] = index;
        }
        return {};
    }
};