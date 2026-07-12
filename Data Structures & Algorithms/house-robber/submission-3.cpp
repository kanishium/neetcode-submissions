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
        vector<int> t(nums.size()+1,0);
        t[0]=0;
        t[1]=nums[0];
        for(int i=2;i<=nums.size();i++){
            t[i]=max(t[i-2]+nums[i-1],t[i-1]);
        }
        return t[nums.size()];
    }
};
