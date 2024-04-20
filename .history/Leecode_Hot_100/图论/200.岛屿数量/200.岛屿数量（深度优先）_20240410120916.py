class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        def dfs(x, y):
            for d in dirs:
                nextx, nexty = x + d[0], y + d[1]
                if nextx < 0 or nextx >= m or nexty < 0 or nexty >= n:
                    continue
                if not visisted[nextx][nexty]


        m, n = len(grid), len(grid[0])
        visisted = [[False] * n for _ in range(m)]
        dirs = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        res = 0
        for i in range(m):
            for j in range(n):
                if not visisted[i][j] and grid[i][j] == '1':
                    res += 1
                    dfs(i, j)
        return res