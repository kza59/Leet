class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<int> unit;
        vector<vector<int>> res;
        res.push_back({1});
        if(numRows == 1) return res;
        res.push_back({1,1});
        if(numRows == 2) return res;
        
        for(int i{2};i<numRows;++i) {
            vector prev = res[i-1];
            
                unit.push_back(1);
                for(int j{1};j<prev.size();++j) {
                    unit.push_back(prev[j-1]+prev[j]);
                }
                unit.push_back(1);
            res.push_back(unit);
            unit.clear();
        }

        return res;
    }
};


//1
//1 1
//1 2 1
//1 3 3 1
//1 4 6 4 1
//1 5 10 10 5 1