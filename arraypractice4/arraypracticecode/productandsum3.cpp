class Solution {
public:
    int subtractProductAndSum(int n) {
        int ans=1;
        int sum=0;
        while(n!=0)
        {
            int digit=n%10;
             ans=ans*digit;
             sum=sum+digit;
            n=n/10;
        }
        
        return ans-sum;
        


        
    }
};