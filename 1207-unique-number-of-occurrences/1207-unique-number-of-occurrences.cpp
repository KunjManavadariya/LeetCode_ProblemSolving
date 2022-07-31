class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int arr1[2001] = {0};
        for(int i=0; i<arr.size(); i++){
            arr1[1000+arr[i]]++;
        }
        sort(arr1,arr1+2001);
        for(int i=1; i<2001; i++){
            if(arr1[i] && arr1[i]==arr1[i-1]){
                return false;
            }
        }
        return true;
    }
};