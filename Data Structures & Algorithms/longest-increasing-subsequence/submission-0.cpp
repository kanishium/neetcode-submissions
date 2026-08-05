#include<bits/stdc++.h>
class Solution {
public:
    int t[1001][1001];
    int calc(vector<int>& nums,int i,int p){
        if(i>=nums.size()) return 0;
        if(p!=-1 && t[i][p]!=-1){
            return t[i][p];
        }
        int take=0;
        if(p==-1 || nums[p]<nums[i]){
            take=1 + calc(nums,i+1,i);
        }
        int skip=calc(nums,i+1,p);
        if(p!=-1){
            t[i][p]=max(skip,take);
        }
        return max(take,skip);
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(t,-1,sizeof(t));
        return calc(nums,0,-1);
    }
};
