class Solution {
public:
     int maxArea(vector<int>& height) {
        int i=0, j=height.size()-1, calc=0;
         while(i<j){
         if(height[i]<height[j]){
             calc=max(calc, (j-i)*height[i]);
             i++;
         }else{
             calc=max(calc, (j-i)*height[j]);
             j--;
         }   
         }   
         return calc;
     }
};