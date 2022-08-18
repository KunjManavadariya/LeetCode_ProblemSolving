class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> counter;
        priority_queue<int> q;
        int res = 0, removed = 0;
        
        for (auto it : arr) counter[it]++;
        for (auto it2 : counter) q.push(it2.second);
        
        while (removed < arr.size() / 2) {
            removed += q.top();
            q.pop();
            res++;
        }
        return res;
    }
};