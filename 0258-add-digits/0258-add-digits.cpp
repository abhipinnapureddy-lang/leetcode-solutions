class Solution {
public:
int add(int num)
{
    int sum=0;
    while(num>0)
    {
        sum+=num%10;
        num=num/10;
    }
    if(sum>=10)
    return add(sum);
    else  
    return sum;
}
    int addDigits(int num) {
        return add(num);
    }
};