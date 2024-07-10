class Solution {
public:
    void backtrack(vector<int>& candidates, vector<int>& soln, vector<vector<int>>& res, int target, int index) {
        if(target == 0) {
            res.push_back(soln);
            return;
        }
        if(target < 0) {
            return;
        }
        for(int i{index};i<candidates.size();++i) {
            soln.push_back(candidates[i]);
            backtrack(candidates,soln,res,target-candidates[i],i);
            soln.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> res;
        vector<int> soln;
        backtrack(candidates, soln, res, target, 0);
        return res;
    }
};