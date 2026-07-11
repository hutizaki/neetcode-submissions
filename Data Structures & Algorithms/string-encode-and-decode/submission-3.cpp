#include <sstream>
class Solution {
public:

    string encode(vector<string>& strs) {
        ostringstream sb;
        for (string s : strs) {
            sb << s.length() << "#" << s;
        }
        string ans = sb.str();
        return ans;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        int i = 0;
        while (i < s.length()) {
            int j = s.find('#', i);
            int len = stoi(s.substr(i, j - i));
            ans.push_back(s.substr(j + 1, len));
            i = j + 1 + len;
        }
        return ans;
    }
};