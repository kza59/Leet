class Solution {
public:
    int lengthOfLastWord(string s) {
        int a{0};
        if(s.length() == 1) return 1;

        // static_cast<int>({s.length()-1});
        for(int i{static_cast<int>(s.length()-1)};i>0;--i) {

                a = i;
                while(s[a] == ' ') {
                    --a;
                }
                cout << a << endl;
        for(int j{a};j>=0;--j) {
                    if(s[j] == ' ') {
                        cout << a-j << endl;
                        // return s.substr(j, a-j).length();
                        return a-j;
                    }
                }
                return a+1;
        }
        return 0;
        
    }
};
//___fly_me___to___the_moon__
//   fly me   to   the moon  