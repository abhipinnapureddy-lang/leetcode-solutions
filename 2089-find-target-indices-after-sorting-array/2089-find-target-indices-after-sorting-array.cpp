class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        vector<int> st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(target==nums[i])
            st.push_back(i);
        }
        if(st.empty())
        return {};
        else
        return st;
    }
};