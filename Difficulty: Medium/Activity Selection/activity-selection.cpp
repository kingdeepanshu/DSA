class Solution {
  public:
    int activitySelection(vector<int> &start, vector<int> &finish) {
        // code here
        vector<pair<int, int>> act;
        for(int i = 0; i < start.size(); i++){
            act.push_back(make_pair(finish[i], start[i]));
        }
        sort(act.begin(), act.end());
        int t = 0;
        
        int ans = 0;
    
        for(int i = 0; i < act.size(); i++){
            if(act[i].second > t){
                ans++;
                t = act[i].first;
            }
        }
        return ans;
    }
};