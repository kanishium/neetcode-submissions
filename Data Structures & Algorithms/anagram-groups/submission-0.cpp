class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        map<string , int> mp;
        int idx=0;
        for(int i=0;i<strs.size();i++){
            string temp=strs[i];
            sort(strs[i].begin(),strs[i].end());
            if(mp.find(strs[i])!=mp.end()){
                ans[mp[strs[i]]].push_back(temp);
            }
            else{
                ans.push_back({temp});
                mp[strs[i]]=idx;
                idx++;
            }
        }
        return ans;
    }
};
