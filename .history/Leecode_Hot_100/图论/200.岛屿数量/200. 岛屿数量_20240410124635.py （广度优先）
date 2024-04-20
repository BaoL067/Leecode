class Solution:
    def numIslands(self, grid: List[List[str]]) -> int:
        def bfs(x, y):
            queue = deque()
            queue.append((x, y))
            visited[x][y] = True
            while(queue):
                curx, cury = queue.popleft()
                for d in dirs:
                    nextx, nexty = curx + d[0], cury + d[1]
                    if nextx < 0 or nextx >= m or nexty < 0 or nexty >= n:
                        continue
                    if not visited[nextx][nexty] and grid[nextx][nexty] == '1':
                        queue.append((nextx, nexty))
                        visited[nextx][nexty]= True

        m, n = len(grid), len(grid[0])
        visited = [[False] * n for _ in range(m)]
        dirs = [(0, 1), (0, -1), (1, 0), (-1, 0)]
        res = 0
        for i in range(m):
            for j in range(n):
                if not visited[i][j] and grid[i][j] == '1':
                    res += 1
                    bfs(i, j)
        return res