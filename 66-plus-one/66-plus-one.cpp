class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size();
        if(digits[n-1]!=9){
            digits[n-1]++;
        }
        else{
            digits[n-1]=0;
            for(int i=n-2; i>=0; i--){
                if(digits[i]==9 && i-1>=0){
                    digits[i]=0;
                }
                else if(digits[i]!=9){
                    digits[i]+=1;
                    return digits;
                }
            }
            digits[0]=0;
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};