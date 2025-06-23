class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        if(r*c != mat.size()*mat[0].size()) return mat;

        int p = 0;
        int q = 0;

        vector<vector<int>> ans(r, vector<int>(c));

        for(int i = 0; i < mat.size(); i++){
            for(int j = 0; j < mat[0].size(); j++){
                if(q == c){
                    p++;
                    q = 0;
                }
                ans[p][q] = mat[i][j];
                q++;
            }
        } 
        return ans;
    }
};