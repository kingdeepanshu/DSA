class Solution {
  public:
    vector<vector<int>> mergeOverlap(vector<vector<int>>& arr) {
        // Code here
        sort(arr.begin(), arr.end());
        
        int t = arr[0][1];
        vector<vector<int>> ans;
        vector<int> a(2);
        a[0] = arr[0][0];
        
        for(int i = 1; i < arr.size(); i++){
            
            if(arr[i][0] <= t){
                if(!(arr[i][1] <= t)){
                    t = arr[i][1];
                }
            }else{
                a[1] = t;
                ans.push_back(a);
                a[0] = arr[i][0];
                t = arr[i][1];
            }
            
        }
        a[1] = t;
        ans.push_back(a);
        return ans;
    }
};