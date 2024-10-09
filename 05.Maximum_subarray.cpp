class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum=INT_MIN, cur_sum=0;
        for (auto it: nums) {
            if (cur_sum<0) cur_sum=0;
            cur_sum += it;
            maxsum = max(maxsum,cur_sum);
        }
        return maxsum;
    }
};