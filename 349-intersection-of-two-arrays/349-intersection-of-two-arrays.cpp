class Solution {
public:
    // vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    //     vector<int> freq(1002, 0);
    //     vector<int> res;
    //     if(nums1.size()>=nums2.size()){
    //     for(int i=0; i<nums1.size(); i++){
    //         freq[nums1[i]]++;
    //     }
    //     for(int i=0; i<nums2.size(); i++){
    //         if(freq[nums2[i]]!=1){
    //             res.push_back(nums2[i]);
    //             freq[nums2[i]]=0;
    //         }
    //     }
    //         return res;
    //     }
    //     else{
    //     for(int i=0; i<nums2.size(); i++){
    //         freq[nums2[i]]++;
    //     }
    //     for(int i=0; i<nums1.size(); i++){
    //         if(freq[nums1[i]]!=1){
    //             res.push_back(nums1[i]);
    //             freq[nums1[i]]=0;
    //         }
    //     }
    //         return res;
    //     }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
    set<int> s(nums1.begin(), nums1.end());
    vector<int> out;
    for (int x : nums2)
        if (s.erase(x))
            out.push_back(x);
    return out;
}
};