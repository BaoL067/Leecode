class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        if (matrix.empty() || matrix[0].empty())
            return false;
        int m = matrix.size(), n = matrix[0].size();
        int row = 0, col = n - 1;
        while (row < m && col >= 0)
        {
            if (matrix[row][col] == target)
                return true;
            else if (matrix[row][col] < target)
                row += 1;
            else
                col -= 1;
        }
        return false;
    }
};