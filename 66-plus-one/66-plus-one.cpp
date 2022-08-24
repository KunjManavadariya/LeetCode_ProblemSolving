class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size()-1;
        if(digits[n]!=9){                                //If last element is not 9, simply add 1 to it and return
            digits[n]++;
        }
        else{
            digits[n]=0;                                 //If you reach here, it means the element is 9. Then make it 0 and follow ahead.
            for(int i=n-1; i>=0; i--){                     //Now check the previous element (if exists)
                if(digits[i]==9 && i-1>=0){                //If (previous) element is 9 and there is still an element previous to it, then make it 0 and follow ahead.
                    digits[i]=0;
                }
                else if(digits[i]!=9){                     //If (previous) element is not 9, add 1 to it and return the vector.
                    digits[i]+=1;
                    return digits;
                }
            }
            digits[0]=0;                                  //If you reach here, that means all elements in the vector are 9. (Think about it a little bit!). We made the rest of the elements 0. Now make the first element 0 and insert 1 at the beginning.
            digits.insert(digits.begin(), 1);
        }
        return digits;                                    //Return the final vector!!
    }
};