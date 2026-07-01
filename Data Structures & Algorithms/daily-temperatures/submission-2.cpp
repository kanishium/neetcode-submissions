class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        stack<int> st;
        int n=temperatures.size();
        vector<int> ans(n,0);
        st.push(n-1);
        for(int i=n-2;i>=0;i--){
                if(temperatures[st.top()]>temperatures[i]){
                    st.push(i);
                    ans[i]++;
                }
                else{
                    int cnt=0;
                    while(!st.empty() && temperatures[st.top()]<=temperatures[i]){
                        st.pop();
                        cnt++;
                    }
                    if(!st.empty()){
                        ans[i]=st.top()-i;
                    }
                    st.push(i);
                }
            
        }
        return ans;
    }
};
