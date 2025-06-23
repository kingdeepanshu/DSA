class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int ans = 0;
        int r = 0;
        int c = 0;
        for(int i = 0; i < mat.size(); i++){
            ans += mat[r][c];
            r++;
            c++;
        }
        r = 0;
        c = mat.size()-1;
        for(int i = 0; i < mat.size(); i++){
            if(mat.size()%2 != 0 && r == c){
                r++;
                c--;
                continue;
            }
            ans += mat[r][c];
            r++;
            c--;
        }

        return ans;
    }
};