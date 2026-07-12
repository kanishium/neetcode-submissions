class Solution {
public:
    int calc(vector<int>& nums,int idx,vector<int>& t){
        if(idx>=nums.size()){
            return 0;
        }
        if(t[idx]!=-1){
            return t[idx];
        }
        int take,nottake;
        take=nums[idx]+calc(nums,idx+2,t);
        nottake=calc(nums,idx+1,t);
        return t[idx]=max(take , nottake);
    }
    int rob(vector<int>& nums) {
        vector<int> t(nums.size(),-1);
        return calc(nums,0,t);
    }
};
