class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> freq;
        for(int i=0; i<arr.size(); i++){
            int count=1;
            if(arr[i]==1001){
                continue;
            }
            for(int j=i+1; j<arr.size(); j++){
                if(arr[j]==1001){
                 continue;   
                }
                if(arr[i]==arr[j]){
                    arr[j]=1001;
                    count++;
                }
            }
            freq.push_back(count);
        }
        for(int i=0; i<freq.size(); i++){
            cout<<freq[i]<<" ";
        }
        cout<<endl;
        // for(int i=1; i<freq.size(); i++){
        //     int temp;
        //     if(freq[i]>freq[i-1]){
        //     temp=freq[i];
        //     freq[i]=freq[i-1];
        //     freq[i-1]=temp;
        //     }
        // }
        sort(freq.begin(), freq.end());
        for(int i=1; i<freq.size(); i++){
            if(freq[i]==freq[i-1]){
                return false;
            }
        }
        return true;
    }
};