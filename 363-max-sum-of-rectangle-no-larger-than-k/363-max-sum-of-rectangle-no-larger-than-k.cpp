class Solution {
public:
    int maxSumSubmatrix(vector<vector<int>>& matrix, int k) {
        int m = matrix.size();
        int n = matrix[0].size();
        int ans = INT_MIN;
        for (int left = 0; left<m; left++){
            vector<int> col(n, 0);
            for(int right = left; right<m; right++){
                // Apply Kadane Algorithm
                int best = INT_MIN;
                int curr = 0;
                for(int i=0; i<n; i++){
                    col[i] += matrix[right][i];
                    curr += col[i];
                    if (curr == k){
                        return k;
                    }
                    best = max(best, curr);
                    if (curr<0){
                        curr = 0;
                    }
                }
                if (best<k){
                    ans = max(ans, best);
                    continue;
                }
                // If not find from kadane algorithm i.e. k is less than 0
                set<int> s;
                s.insert(0);
                curr = 0;
                for(int i=0; i<n; i++){
                    curr += col[i];
                    auto it = s.lower_bound(curr - k);
                    if (it != s.end()){
                        ans = max(ans, curr-*it);
                    }
                    s.insert(curr);
                }
            }
        }
        return ans;
    }
};