class Solution {
public:
    int subtractProductAndSum(int n) {
        int res=0, prod=1, sum=0, temp=0;
        while(n!=0){
            temp=n%10;
            prod*=temp;
            sum+=temp;
            n/=10;
        }
        res=prod-sum;
        return res;
    }
};