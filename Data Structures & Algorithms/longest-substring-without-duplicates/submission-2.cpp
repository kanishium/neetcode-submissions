class Solution {
public:
    // bool clac(int l,int h,string s){
    //     map<char,int> mp;
    //     for(int i=l;i<=h;i++){
    //         mp[s[i]]++;
    //         if(mp[s[i]]==2){
    //             return false;
    //         }
    //     }
    //     return true;
    // }
    int lengthOfLongestSubstring(string s) {
        map<char,int> mp;
        if(s.size()==1) return 1;
        int low=0;
        int high=low;
        int ans=0;
        while(high<s.size()){
            if(mp[s[high]]==0){
                mp[s[high]]++;
                ans=max(ans,high-low+1);
                high++;
            }
            else{
                while(mp[s[high]]!=0){
                    mp[s[low]]--;
                    low++;
                }
            }
        }
        return ans;
    }
};
