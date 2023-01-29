class Solution {
private:
void solve(vector<int> nums,int i,vector<int>v,vector<vector<int>>& ans){
    if(i<nums.size()){
    solve(nums,i+1,v,ans);    
    v.push_back(nums[i]);
    solve(nums,i+1,v,ans);

    }
    else{
    ans.push_back(v);

    }

}
public:
    vector<vector<int>> subsets(vector<int>& nums) {
     vector<vector<int>> ans;
     vector<int> v;
     int index=0;
     solve(nums,index,v,ans);

   return ans;
    }
};
