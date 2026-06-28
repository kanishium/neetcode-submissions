class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int l;
        int r;
        int i=0;
        int n=nums.size();
        vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            int l=i+1;
            int r=n-1;
        while(l<r){
            int sum=nums[r]+nums[l]+nums[i];
            if(sum==0){
                v.push_back({nums[i],nums[l],nums[r]});
                l++;
                r--;
                while(l<r && nums[l]==nums[l-1]) l++;
            }
            else if(sum>0){
                r--;
            }
            else{
                l++;
            }
        }
        while(i<n-2 && nums[i]==nums[i+1]) i++;
        }
        return v;
    }
};
