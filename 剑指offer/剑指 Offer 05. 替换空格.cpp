class Solution {
public:
    string q;
    string replaceSpace(string s) {
        for(auto c : s ) {
            if(c == ' ') {
              q += "%20";
            } else {
                q += c;
            }
        }
        return q;
    }
};