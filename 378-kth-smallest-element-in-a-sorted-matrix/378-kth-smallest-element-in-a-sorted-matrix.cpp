class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        // vector<int> res;
        // for(int i=0; i<matrix.size(); i++){
        //     for(int j=0; j<matrix[i].size();j++){
        //         res.push_back(matrix[i][j]);
        //     }
        // }
        // sort(res.begin(), res.end());
        // return res[k-1];
        int n = matrix.size();
		int le = matrix[0][0], ri = matrix[n - 1][n - 1];
		int mid = 0;
		while (le < ri)
		{
			mid = le + (ri-le)/2;
			int num = 0;
			for (int i = 0; i < n; i++)
			{
				int pos = upper_bound(matrix[i].begin(), matrix[i].end(), mid) - matrix[i].begin();
				num += pos;
			}
			if (num < k)
			{
				le = mid + 1;
			}
			else
			{
				ri = mid;
			}
		}
		return le;
    }
};