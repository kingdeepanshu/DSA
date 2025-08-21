class Solution {
  public:
    void sort012(vector<int>& arr) {
        // code here
        int o = 0;
        int t = 0;
        int z = 0;
        for(int i: arr){
            if(i == 0) z++;
            if(i == 1) o++;
            if(i == 2) t++;
        }
        
        for(int i = 0; i < arr.size(); i++){
            if(z > 0) {
                arr[i] = 0; 
                z--;
            }
            else if(o > 0) {
                arr[i] = 1;
                o--;
            }
            else {
                arr[i] = 2;
                t--;
            }
        }
    }
};