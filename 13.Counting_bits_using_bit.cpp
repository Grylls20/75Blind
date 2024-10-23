// TC - O(n)

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1,0);   
        for(int i=1; i<=n; i++) {
            ans[i]=ans[i>>1]+(i&1);  
        }
        return ans;
    }
};

// TC - O(nlogn)

class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        ans.push_back(0);
        for(int i=1; i<=n; i++) {
            int cnt=0;
            int num=i;
            while(num>0) {
                if(num&1) cnt+=1;
                num>>=1;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};
