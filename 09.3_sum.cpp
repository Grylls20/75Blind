class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0; i<n-2; i++) {
            if (i>0 && nums[i]==nums[i-1]) continue;
            int lt=i+1;
            int rt=n-1;
            while(lt<rt) {
                if(nums[i]+nums[lt]+nums[rt]==0) {
                    ans.push_back({nums[i],nums[lt],nums[rt]});
                    while (lt<rt && nums[lt]==nums[lt+1]) lt++;
                    while (lt<rt && nums[rt]==nums[rt-1]) rt--;
                    lt++;
                    rt--;
                } else if(nums[i]+nums[lt]+nums[rt]<0) {
                    lt++;
                } else {
                    rt--;
                }
            }
        }
        return ans;
    }
};