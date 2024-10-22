class Solution {
public:
    //11 is ok
    //111 becomes 21
    void RLE(string& str) {
        // if(str == "1") str = "11";
        // if(str == "11") str = "21";
        // if(str == "21") str = "1211";
string res = "";
for(int a{0};a<str.length();++a) {

        char rChar = str[a];
        int b{a+1};
        int count{1};

        while(b < str.length() && str[b] == rChar) {
            count++;
            b++;
            ++a;
        }

        res += to_string(count);
        res += rChar;

}
str = res;




    }
    string countAndSay(int n) {
        if(n == 0) return " ";
        if(n == 1) return "1";
        string res = "1";
        
        
        for(int i{1};i<n;++i) {
            RLE(res);
        }
        return res;
    }
};