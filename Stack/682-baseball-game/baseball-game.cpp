class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        for(auto i: operations){
            if(i == "+"){
                int a = st.top();
                st.pop();
                int b = st.top();
                st.push(a);
                st.push(a+b);
            }else if(i == "D"){
                st.push(st.top()*2);
            }else if(i == "C"){
                st.pop();
            }else{
                st.push(stoi(i));
            }
        }
        int ans = 0;
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }
        return ans;
    }
};