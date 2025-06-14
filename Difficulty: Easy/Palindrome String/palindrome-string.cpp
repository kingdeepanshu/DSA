class Solution {
  public:
    // Function to check if a string is a palindrome.
    bool isPalindrome(string& s) {
        // code here
        int i = 0;
        int j = s.size()-1;
        
        while(j > i){
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        
        return true;
    }
};