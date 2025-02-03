class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        for(int i = digits.size()-1; i >= 0; i--){
            if(digits[i] == 9){
                digits[i] = 0;
            }else{
                digits[i] = digits[i]+1;
                break;
            }
        }
        // return digits;
        if(digits[0] == 0){
            vector<int> ans;
            ans.push_back(1);
            for(auto i: digits){
                ans.push_back(i);
            }
            return ans;
        }
        return digits;
    }
};