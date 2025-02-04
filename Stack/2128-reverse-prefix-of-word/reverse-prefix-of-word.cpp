class Solution {
public:
    string reversePrefix(string word, char ch) {
        stack<char> st;
        bool aagya = false;
        string ans = "";
        for(auto i: word){
            if(i == ch && !aagya){
                aagya = true;
                st.push(i);
                while(!st.empty()){
                    ans += st.top();
                    st.pop();
                }
                continue;
            }
            if(!aagya){
                st.push(i);
            }else{
                ans += i;
            }
        }
        if(!aagya) return word;
        return ans;
    }
};