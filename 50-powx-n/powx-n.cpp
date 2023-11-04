class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0 || x==1) return 1;
        double val = myPow(x , n/2);
        val *= val;
        //cout<<val<<" ";
        if(n%2 == 0) return val;
        else{
            if(n<0) return val*(1/x);
            //cout<<val<<"##";
            return val*x;
        }
    }
};