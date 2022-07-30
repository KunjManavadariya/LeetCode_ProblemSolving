class Solution {
public:
    int bitwiseComplement(int n) {
        int c = 1, i=1;
      while(c<n){
         c += (1<<i);
          i++;
          
      }
        return n ^ c;
    }
};