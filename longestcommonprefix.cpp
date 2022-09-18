class Solution {
public:
    string longestCommonPrefix(vector<string>& str) {
        string s="";
        sort(str.begin(),str.end());
       for(int i=0;i<str[0].size();i++){
           if(str[0][i]!=str[str.size()-1][i]){
               return s;
           }
           s+=str[0][i];
       }
        return s;
    }
};
