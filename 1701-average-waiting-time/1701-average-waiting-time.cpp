class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        double time = customers[0][1];
        int finishTime = customers[0][0] + customers[0][1];
        int prepTime = customers[0][0];
        for(int i{1};i<customers.size();++i) {

            if(finishTime > customers[i][0]) {
                prepTime = finishTime;
            }
            else {
                prepTime = customers[i][0];
            }
            finishTime = prepTime + customers[i][1];
            time += (finishTime - customers[i][0]);    

        }
        return time/customers.size();

    }
};