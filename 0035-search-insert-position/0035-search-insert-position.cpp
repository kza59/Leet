class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto left{0};
        auto right{nums.size()-1};
        auto median{0};
        while(left < right) {
    median = left+(right-left)/2;
        if(target == nums[median])
               return median;       
        if(target < nums[median]) 
               right = median-1;      
        else left = median+1;
            
            
    median = right + (left-right)/2;
if(median<0) return 0;
            
            
    }
        cout << median <<endl;
        if(target == nums[median])
        return median;
        else return target > nums[median]? median+1 :median;
        
        
    }
};