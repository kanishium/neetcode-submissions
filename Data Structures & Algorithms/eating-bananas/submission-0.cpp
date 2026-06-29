class Solution {
public:
    int calc(vector<int>& piles, int rate){
        int hrs=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]%rate==0){
                hrs+=piles[i]/rate;
            }
            else{
                hrs+=piles[i]/rate;
                hrs++;
            }
        }
        return hrs;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(),piles.end());
        int ans;
        while(low<=high){
            int mid=(low+high)/2;
            int hrs=calc(piles,mid);
            if(hrs>h){
                low=mid+1;
            }
            else{
                ans=mid;
                high=mid-1;
            }
        }
        return ans;
    }
};
