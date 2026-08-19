class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
       unordered_map<int,vector<bool>> hash;
       for(auto x : reservedSeats)
{
    int row = x[0];
    int seat = x[1];
    if(hash.find(row) == hash.end())
     hash[row] = vector<bool>(11, true);
    hash[row][seat] = false;
}
      int ans= (n - hash.size()) * 2;
       for (auto& x : hash)
       {
        vector<bool>& seats=x.second;
       bool left=true;
       bool right=true;
       bool middle=true;
       for(int i=2;i<=5;i++)
       {
        if(!seats[i])
        left=false;
       }
       for(int i=4;i<=7;i++)
       {
        if(!seats[i])
        middle=false;
       }
       for(int i=6;i<=9;i++)
       {
        if(!seats[i])
        right=false;
       }
       if(left&&right)
       ans+=2;
       else if(left||right||middle)
       ans+=1;
       }
       return ans;
    }
};