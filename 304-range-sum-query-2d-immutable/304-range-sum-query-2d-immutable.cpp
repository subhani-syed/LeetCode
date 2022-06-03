class NumMatrix {
    vector<vector<long>> t;
    
public:
    NumMatrix(vector<vector<int>>& M) {
        int ylen = M.size() + 1, xlen = M[0].size() + 1;
        t = vector<vector<long>>(ylen, vector<long>(xlen, 0));
        for (int i = 1; i < ylen; i++)
            for (int j = 1; j < xlen; j++)
                t[i][j] = M[i-1][j-1] + t[i-1][j] + t[i][j-1] - t[i-1][j-1];
    }    
    int sumRegion(int R1, int C1, int R2, int C2) {
        return (int)(t[R2+1][C2+1] - t[R2+1][C1] - t[R1][C2+1] + t[R1][C1]);
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */