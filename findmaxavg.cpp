class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
       int maximum=INT_MIN;
       int sum=0;
        for(int i=0;i<k;i++)
            sum+=nums[i];
             maximum=sum;
        for(int i=k;i<nums.size();i++){
            sum-=nums[i-k];
            sum+=nums[i];
            maximum=max(maximum,sum);
            }
        double avg=(double)maximum/k;
        return avg;
    }
};
