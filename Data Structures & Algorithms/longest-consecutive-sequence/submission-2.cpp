class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        if(n==0) return 0;
        int ans=1;
        int len=1;
        for(int i=1;i<n;i++){
            // cout << nums[i-1] << " " << nums[i] << endl;
            if(nums[i-1]+1==nums[i]){
                len++;
                ans=max(ans,len);
                // cout << nums[i] << endl;
            }
            else if(nums[i]==nums[i-1]) continue;
            else len=1;
        }
        return ans;
    }
};
