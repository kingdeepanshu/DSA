class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string a = "";
        bool start = false;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                if(!start){
                    continue;
                }else{
                    st.push(a);
                    a = "";
                    start = false;
                }
            }else{
                start = true;
                a += s[i];
            }
        }
        st.push(a);//
        // return st.top();
        string ans = "";
        while(!st.empty()){
            if(st.top() == ""){
                st.pop();
                continue;
            }
            ans += st.top();
            ans += " ";
            st.pop();
        }
        ans.pop_back();
        return ans;
    }
};