class Solution {
public:
    int trap(vector<int>& height) {
        int left=0;
        int right=height.size()-1;
        int leftm=0;
        int rightm=0;
        int wat=0;
        while(left<right)
        {
            if(height[left]<=height[right])
            {
                leftm=max(leftm,height[left]);
                wat+=leftm-height[left];
                left++;
            }
            else{
                rightm=max(rightm,height[right]);
                wat+=rightm-height[right];
                right--;
            }
        }
        return wat;
    }
};