class Solution {
    public String removeStars(String s) {
        Deque<Character> st = new ArrayDeque<>();

        for(Character i: s.toCharArray()){
            if(i == '*'){
                if(st.isEmpty()) continue;
                st.pop();
            }else{
                st.push(i);
            }
        }

        String ans = "";

        Deque<Character> nst = new ArrayDeque<>();

        while(!st.isEmpty()){
            nst.push(st.peek());
            st.pop();
        }

        while(!nst.isEmpty()){
            ans += nst.peek();
            nst.pop();
        }

        return ans;
    }
}