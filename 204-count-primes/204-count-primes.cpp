class Solution {
public:
    int countPrimes(int n) {                                     //Sieve of Eratosthenes
        int count=0;
        if(n==0 || n==1) return 0;
        vector<bool> vec(n+1, 1);                                //One size more in vector just to be safe from overflow
        for(int i=2; i<n; i++){
            if(vec[i]!=0){
                count++;
                for(int j=i*2; j<n; j+=i) vec[j]=0;             //If the element is not marked 0, then make all its multiples 0 till n as they won't be prime.
            }
        }
    return count;
    }
};