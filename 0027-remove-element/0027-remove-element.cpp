class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0;
        int j=nums.size()-1;
        int k=0;
        while(i<=j)
        {
            if(nums[i]==val)
            {
                int temp=nums[j];
                nums[j]=nums[i];
                nums[i]=temp;
                j--;
                k++;
                continue;
            }
            else
            i++;
        }  
        return nums.size()-k;  
    }
};