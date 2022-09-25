class Solution {
public:
    bool isPowerOfTwo(int n) {
        int i=0;
        while(i<=30)
        {
            int num=pow(2,i);
            if(num==n)
                return true;
            i+=1;
        }
        return false;
    }
};