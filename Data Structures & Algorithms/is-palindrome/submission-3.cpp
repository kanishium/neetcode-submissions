class Solution {
public:
    bool isPalindrome(string s) {
        int l=0;
        int n=s.size();
        cout << n;
        int r=n-1;
        while(l<r){
            if(isalnum(s[r]) && isalnum(s[l]) ){
                if(tolower(s[r])!=tolower(s[l])){
                    return false;
                }
                else{
                    l++;
                    r--;
                }
            }
            else{
                if(!isalnum(s[l])){
                    l++;
                }
                if(!isalnum(s[r])){
                    r--;
                }
            }
        }
        return true;
    }
};
