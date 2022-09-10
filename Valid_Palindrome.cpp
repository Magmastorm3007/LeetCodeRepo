class Solution {
public:
    bool isPalindrome(string s) {
        string m="";
      for(auto x:s){
            if(isalnum(x)){
                if(isupper(x)){
             m+=tolower(x);
                }
                else
                    m+=x;
            }
        }
        string t=m;
        reverse(t.begin(),t.end());
        if(t==m)
            return true;
            return false;
     
        
       
    }
};
