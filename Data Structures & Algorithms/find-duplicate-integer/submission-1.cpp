class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int i=0;
        while(true){
            if(nums[i]==0) return i;
            int k=i;
            i=nums[i];
            nums[k]=0;
        }
        return 0;
    }
};
