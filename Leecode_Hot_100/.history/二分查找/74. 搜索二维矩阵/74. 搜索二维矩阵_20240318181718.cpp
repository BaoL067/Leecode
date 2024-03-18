class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        int left = 0, right = m - 1;
        int mid;
        while(left <= right)
        {
            mid = left + (right - left) / 2;
            if (matrix[mid][0] < target)
                left = mid + 1;
            else if (matrix[mid][0] > target)
                right = mid - 1;
            else    
                return true;
        }
        if (right < 0)
            return false;
        for(int i = 0; i < n; i++)
        {
            if (matrix[right][i] == target)
                return true;
        }
        return false;
    }
};