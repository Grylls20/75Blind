class Solution {
public:
    int maxArea(vector<int>& height) {
        int lt=0;
        int rt=height.size()-1;
        int area=0;
        while(lt<rt) {
            area=max(area,min(height[lt],height[rt])*(rt-lt));
            if(height[lt]<height[rt]) {
                lt++;
            } else {
                rt--;
            }
        }
        return area;
    }
};