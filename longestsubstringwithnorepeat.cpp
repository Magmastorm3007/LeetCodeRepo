class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int i=0,j=0,k=0;
        unordered_map<char,int> mp;
        for(;j<s.size();j++){
            if(mp[s[j]]++)
                k++;
         if(k && --mp[s[i++]])
           
                k--;
        }
        return j-i;
    }
};
