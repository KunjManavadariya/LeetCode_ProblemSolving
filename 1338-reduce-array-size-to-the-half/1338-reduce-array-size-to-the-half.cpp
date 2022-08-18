class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int> cnt;
        for (int it : arr) ++cnt[it];
        
        vector<int> frequencies;
        for (auto [_, freq] : cnt) frequencies.push_back(freq);
        sort(frequencies.begin(), frequencies.end());
        
        int res = 0, removed = 0, half = arr.size() / 2, j = frequencies.size() - 1;
        while (removed < half) {
            res += 1;
            removed += frequencies[j--];
        }
        return res;
    }
};