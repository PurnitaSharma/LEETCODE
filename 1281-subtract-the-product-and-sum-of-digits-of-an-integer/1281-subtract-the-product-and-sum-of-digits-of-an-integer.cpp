class Solution {
public:
    int subtractProductAndSum(int n) {
        int r=n,product=1,sum=0;
        while(n!=0)
        {
            r=n%10;
            product*=r;
            sum+=r;
            n=n/10;
        }
        return product-sum;
    }
};