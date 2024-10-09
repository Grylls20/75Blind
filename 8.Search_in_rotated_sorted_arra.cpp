class Solution {
public:
    int search(vector<int>& nums, int target) {
        int lt=0, rt=nums.size()-1;
        while(lt<=rt) {
            int mid=(lt+rt)/2;
            if (nums[mid]==target) 
            return mid;
            else if (nums[lt]<=nums[mid]) {
                if (target< nums[mid] && target>=nums[lt]) 
                rt=mid-1;
                else lt=mid+1; 
            } else {
                if (target>nums[mid] && target <= nums[rt])
                lt=mid+1;
                else rt=mid-1;
            }

        }
        return -1;
    }
};