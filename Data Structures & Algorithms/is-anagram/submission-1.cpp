class Solution {
public:
    bool isAnagram(string s, string t) {
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;
        vector<int> freq(26,0);
        for(auto it: s){
            freq[it-'a']++;
        }
        for(auto it: t){
            freq[it-'a']--;
        }
        for( int i=0;i<26;i++){
            if(freq[i]!=0) return false;
        }
        return true;
    }
};
