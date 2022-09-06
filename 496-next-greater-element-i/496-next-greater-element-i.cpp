// class Solution {
// public:
// //     vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
// //        for(int i=0, j=0; i<nums2.size(); i++){
// //            if(nums1[i]==nums2[j]){
// //                for(int k=j; k<nums2.size(); k++){
                   
// //                }
// //            }
// //             }
// //        }

//     }
// };
// OJ: https://leetcode.com/problems/next-greater-element-i/
// Author: github.com/lzl124631x
// Time: O(N)
// Space: O(N)
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        stack<int> s;
        unordered_map<int, int> m;
        for (int n : nums) {
            while (s.size() && s.top() < n) {
                m[s.top()] = n;
                s.pop();
            }
            s.push(n);
        }
        vector<int> ans;
        for (int n : findNums) ans.push_back(m.count(n) ? m[n] : -1);
        return ans;
    }
};
