class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int arr1[2001] = {0};
        // for(int i=0; i<arr.size(); i++){
        //     int count=1;
        //     if(arr[i]==1001){
        //         continue;
        //     }
        //     for(int j=i+1; j<arr.size(); j++){
        //         if(arr[j]==1001){
        //          continue;   
        //         }
        //         if(arr[i]==arr[j]){
        //             arr[j]=1001;
        //             count++;
        //         }
        //     }
        //     freq.push_back(count);
        // }
        for(int i=0; i<arr.size(); i++){
            arr1[1000+arr[i]]++;
            cout<<arr1[1000+arr[i]]<<" ";
        }
        cout<<endl;
        sort(arr1,arr1+2001);
        for(int i=1; i<2001; i++){
            if(arr1[i] && arr1[i]==arr1[i-1]){
                return false;
            }
        }
        return true;
    }
};