class Solution {
public:
        bool Isprime(int num){
        int c=0;
        for(int i=num;i>=1;i--){
            if(num%i==0)
             c++;   
        }  
        return c==2;
    } 
    
    int countPrimeSetBits(int left, int right) {
        
        int ans = 0;
        for(int i = left ; i <= right ; i++){  
            int count = 0;
            int n =i;
            
            while(n){
                n=n&(n-1);
                count++;
            }
            
            if(Isprime(count))
                    ans++;    
            // is this a prime number
        }
        
        return ans;
        
    }
    
};