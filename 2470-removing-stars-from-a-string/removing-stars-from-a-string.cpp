class Solution {
public:
    string removeStars(string s) {
        string ans = "";
        if(s == "") return ans;
        stack<char> st;
        for(auto i: s){
            if(i == '*'){
                if(st.empty()) continue;
                st.pop();
            }else{
                st.push(i);
            }
        }

        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        int i = 0;
        int j = ans.size()-1;
        while(i < j){
            swap(ans[i++], ans[j--]);
        }

        return ans;
    }
};