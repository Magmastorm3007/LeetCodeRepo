class Solution {
public:
    int maxArea(vector<int>& height) {
        int max=INT_MIN;
        int i=0;
        int j=height.size()-1;
        while(i<j){int sum;
        if(height[i]<height[j]){
            sum=abs(j-i)*height[i];
            i++;
        }
        else {
             sum=abs(j-i)*height[j];
            j--;
        }
         if(sum>max)
             max=sum;
            
        }
        return max;
    }
};
