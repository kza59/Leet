class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i{1};
        if(digits[digits.size()-1] == 9) {
            if(digits.size() == 1) {
                digits[0] = 1;
                digits.push_back(0);
                return digits;
            }
            while(i != digits.size() && digits[digits.size()-i] == 9) {
            digits[digits.size()-i] = 0;
            i++;
            }
            if(digits[digits.size()-i] == 9) {
                digits[digits.size()-i] = 1;
                digits.push_back(0);
            }
            else digits[digits.size()-i] += 1;
            // 9 9 9 9 9 9
            // 9 9 9 9 1 0
            // 
            
        }
        else digits[digits.size()-1] += 1;
        return digits;
    }
};