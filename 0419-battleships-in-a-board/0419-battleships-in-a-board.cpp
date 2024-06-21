class Solution {
public:
    int countBattleships(vector<vector<char>>& board) {
        //adjacency check?
        // for every vector in board
        // for every item
        // if item == X
        // while(items left or right or up or down exist)
        // remove those items from the board
        // increment result
        int left,right,up,down,counter{0};
        for(int i{0};i<board.size();++i) {
            for(int j{0};j<board[0].size();++j) {
                if(board[i][j] == 'X') {
                    cout << "TRIGGER" << endl;
                     ++counter;
                    right = j+1;
                    left = j-1;
                    up = i-1;
                    down = i+1;
                    while(right < board[0].size() && board[i][right] == 'X' ) {
                        board[i][right] = '.';
                        right++;
                    }
                    while(left > 0 && board[i][left] == 'X' ) {
                        board[i][left] = '.';

                        left--;
                    }
                    while(up > 0  && board[up][j] == 'X' ) {
                        board[up][j] = '.';
  
                        up--;
                    }
                    while(down < board.size()  && board[down][j] == 'X' ) {
                        board[down][j] = '.';
   
                        down++;
                    }
                    // if(board[i][j-1] == 'X')
                    // if(board[i][j-1] == 'X')
                }
            }
        }
        return counter;

    }
};