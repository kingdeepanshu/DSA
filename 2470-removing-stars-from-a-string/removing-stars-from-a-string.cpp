class Solution {
public:
    string removeStars(string s) {
        stack<char> st;

        string ans = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == '*'){
                if(st.empty()) continue;
                st.pop();
            }
            else st.push(s[i]);
        }
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        int i = 0;
        int j = ans.size()-1;

        while(i < j){
            char t = ans[i];
            ans[i] = ans[j];
            ans[j] = t;
            i++;
            j--;
        }

        return ans;
    }
};