// Last updated: 04/09/2025, 22:37:44
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlen=0;
        int l=0;
        unordered_set<int>st;
        for(int r=0;r<s.length();r++){
            if(st.find(s[r]) != st.end()){
                while(l<r && st.find(s[r]) != st.end()){
                    st.erase(s[l]);
                    l++;
                }
            }
            st.insert(s[r]);
            maxlen=max(maxlen,r-l+1);
        }
        return maxlen;

    }
};