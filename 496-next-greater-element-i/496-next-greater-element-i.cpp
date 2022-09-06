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
        for(int i=0; i<nums1.size(); i++){
            bool  p = false;
                for(int j = freq[nums1[i]]+1; j<nums2.size(); j++){
                    if(nums2[j]>nums1[i]){
                        p = true;
                        nums1[i] = nums2[j];
                        break;
                    }
                }
            if(!p){
                nums1[i] = -1;
            }
        }
        return nums1;
    }
};