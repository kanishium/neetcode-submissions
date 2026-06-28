class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        map<int,int> mp;
        int max=0;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
            if(mp[nums[i]]>max) max=mp[nums[i]];
        }
        while(ans.size()!=k){
            for(auto it:mp){
                if(it.second==max){
                    ans.push_back(it.first);
                }
            }
            max--;
        }
        return ans;
    }
};
