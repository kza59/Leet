class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        for(int i{0};i<bits.size();++i) {
            if(bits[i] == 1) { //in this case we skip the next character
            if(i+1 < bits.size()) {
            if(bits[i+1] == 1) {
            }
            else {
                if(i+2 == bits.size()) return false;
            }
            ++i;
            }

        }
    
    }
    return true;
    }
};