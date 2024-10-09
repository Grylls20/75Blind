class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>p(n);
        vector<int>s(n);
        vector<int>pr(n);
        p[0]=1;
        for(int i=1; i<n; i++) {
            p[i]=p[i-1]*nums[i-1];
        }
        s[n-1]=1;
        for (int i=n-1; i>0; i--) {
            s[i-1]=s[i]*nums[i];
        }
        for (int i=0; i<n ;i++) {
            pr[i]=s[i]*p[i];
        }
        return pr;

    }
};