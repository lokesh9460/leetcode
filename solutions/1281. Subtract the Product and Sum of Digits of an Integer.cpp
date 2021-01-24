class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum=0;
        int product=1;
        int m=n;
        while(n!=0)
        {
            sum+=(n%10);
            n/=10;
            product*=(m%10);
            m/=10;
        }
        return (product-sum);
        
    }
};
