class Solution {
public:
    // int maxArea(vector<int>& height) {
    //     int max=height[0], index=0;
    //     for(int i=1; i<height.size(); i++){
    //         if(height[i]>max){
    //             max=height[i];
    //             index=i;
    //         }
    //     }
    //     cout<<index;
    //     vector<int>vec;
    //     int count=1;
    //     for(int i=index+1; i<height.size(); i++){
    //         int temp=min(height[index], height[i])*count;
    //         count++;
    //         vec.push_back(temp);
    //     }
    //     return *max_element(vec.begin(), vec.end());
    // }
    int maxArea(vector<int>& height) {
    int water = 0;
    int i = 0, j = height.size() - 1;
    while (i < j) {
        int h = min(height[i], height[j]);
        water = max(water, (j - i) * h);
        while (height[i] <= h && i < j) i++;
        while (height[j] <= h && i < j) j--;
    }
    return water;
}
};