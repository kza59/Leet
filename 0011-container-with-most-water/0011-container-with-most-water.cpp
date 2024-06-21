class Solution {
public:
//probably best to start at the first and last elements and then work from there?
    int maxArea(vector<int>& height) {
        int res{0};
        int left{0};
        int right = static_cast<int>(height.size())-1;
        while(left < right) {
            //effectively a longer version of the max function between res and the area
            res = res > ((height[left] > height[right] ? height[right] : height[left]) * (right-left)) ? res : ((height[left] > height[right] ? height[right] : height[left]) * (right-left));
            height[left] < height[right] ? left++ : right--; //we will move inwards until we meet. We move the shorter line inward
        }
        return res;
        
    }
};