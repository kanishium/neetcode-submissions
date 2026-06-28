class Solution {
public:
    bool clac(int l,int h,string s){
        map<char,int> mp;
        for(int i=l;i<=h;i++){
            mp[s[i]]++;
            if(mp[s[i]]==2){
                return false;
            }
        }
        return true;
    }
    int lengthOfLongestSubstring(string s) {
        if(s.size()==1) return 1;
        int low=0;
        int high=low+1;
        int ans=0;
        while(high<s.size()){
            if(clac(low,high,s)){
                ans=max(ans,high-low+1);
                high++;
            }
            else{
                low++;
            }
        }
        return ans;
    }
};
