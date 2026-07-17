class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> freq1(26, 0);
        vector<int> freq2(26, 0);
        int m = s1.size();
        int n = s2.size();
        if (m > n)
            return false;
        for (int i = 0; i < m; i++) {
            freq1[s1[i] - 'a']++;
        }
        for (int i = 0; i < m; i++) {
            freq2[s2[i] - 'a']++;
        }
        int i = 0;
        int j = m;
        while (j < n) {
            if (freq1 == freq2)
                return true;
            else {
                freq2[s2[i] - 'a']--;
                freq2[s2[j] - 'a']++;
                i++;
                j++;
            }
        }
        if(freq1==freq2) return true;
        return false;
    }
};
