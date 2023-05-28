class Solution {
    public int[][] differenceOfDistinctValues(int[][] grid) {
        int N = grid.length, M = grid[0].length;
        int[][] res = new int[N][M];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                HashSet<Integer> set1 = new HashSet<>(), set2 = new HashSet<>();
                for (int k = 1; i - k >= 0 && j - k >= 0; k++) {
                    set1.add(grid[i - k][j - k]);
                }
                for (int k = 1; i + k < N && j + k < M; k++) {
                    set2.add(grid[i + k][j + k]);
                }
                res[i][j] = Math.abs(set1.size() - set2.size());
            }
        }
        return res;
    }
}