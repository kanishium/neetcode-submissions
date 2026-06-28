class Solution {
public:
    int maxArea(vector<int>& heights) {
        int low=0;
        int high=heights.size()-1;
        int ans=0;
        while(low<high){
            int water=(high-low)*min(heights[high],heights[low]);
            ans=max(water,ans);
            if(heights[low]<heights[high]){
                low++;
            }
            else if(heights[high]<heights[low]){
                high--;
            }
            else{
                low++;
                high--;
            }
        }
        return ans;
    }
};
