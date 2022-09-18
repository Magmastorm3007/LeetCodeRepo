class Solution {
public:
    bool isPerfectSquare(int num) {
        if(num==1)
            return true;
        int i=1;
      long long  int val=1;
        while(val<num){
            val=(long long)i*i;
                if(val==num)
                    return true;
                
            i++;
        }
        return false;
    }
};
