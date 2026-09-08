class Solution {
public:
    int countCommas(int n) {
        if(n<1000)
        return 0;
        int c=0;
        int k=1000;
        while(k<=n)
        {
            k++;
            c++;
        }
        return c;
    }
};