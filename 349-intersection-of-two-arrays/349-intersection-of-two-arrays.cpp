class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int arr[1002]={0};
        vector<int> res;
        for(int i=0; i<nums1.size(); i++){
            arr[nums1[i]]++;
        }
        for(int i=0; i<nums2.size(); i++){
            if(arr[nums2[i]]!=0){
                res.push_back(nums2[i]);
                arr[nums2[i]]=0;
            }
        }
        return res;
    }
};