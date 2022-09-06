class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
       vector<int> freq(100002, -1);
        for(int i=0; i<nums2.size(); i++){
            freq[nums2[i]] = i;
        }
        for(int i=0; i<10; i++){
            cout<<freq[i]<<" ";
        }
        cout<<endl;
        int temp = nums1[0];
        for(int i=0; i<nums1.size(); i++){
            temp = nums1[i];
            bool  p = false;
            // if(freq[nums1[i]!=-1]){
                for(int j = freq[nums1[i]]; j<nums2.size(); j++){
                    if(nums2[j]>nums1[i]){
                        p = true;
                        nums1[i] = nums2[j];
                        break;
                    }
                }
            // }
            if(!p){
                nums1[i] = -1;
            }
        }
        // cout<<temp<<endl;
        // if(temp == nums1[nums1.size()-1]){
        //     nums1[nums1.size()-1] = -1;
        // }
        return nums1;
    }
};