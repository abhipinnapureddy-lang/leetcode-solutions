class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n=students.size();
        int zero=0;
        int one=0;
        for(int student: students)
        {
           if(student==0)
           zero++;
           else
           one++;
        }
        for(int sandwich:sandwiches)
        {
            if(sandwich==0)
            {
                if(zero==0)
                return one;
                zero--;
            }
               if(sandwich==1)
            {
                if(one==0)
                return zero;
                one--;
            }

        }
        return 0;
    }
};