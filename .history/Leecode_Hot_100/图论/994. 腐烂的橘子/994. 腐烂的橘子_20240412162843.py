class Solution:
    def orangesRotting(self, grid: List[List[int]]) -> int:
        m, n = len(grid), len(grid[0])
        dirs = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        queue = deque()
        fresh = sum(row.count(1) for row in grid)
        time = 0
        for i in range(m):
            for j in range(n):
                if grid[i][j] == 2:
                    queue.append((i, j, time))
        while queue:
            x, y, time = queue.popleft()
            for dx, dy in dirs:
                nextx, nexty = x + dx, y + dy
                if 0 <= nextx < m and 0 <= nexty < n and grid[nextx][nexty] == 1:
                    grid[nextx][nexty] = 2
                    fresh -= 1
                    queue.append((nextx, nexty, time + 1))
        if fresh > 0:
            return -1

        return time
                    