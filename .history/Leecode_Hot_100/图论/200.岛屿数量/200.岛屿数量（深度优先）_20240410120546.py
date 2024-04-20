class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        def dfs(i, j):


        m, n = len(grid), len(grid[0])
        dirs = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        res = 0
        for i in range(m):
            for j in range(n):
                