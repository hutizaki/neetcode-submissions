class Solution {
public:
    bool isPalindrome(string s) {
        string str = "";
        for (char c : s) {
            if(isalnum(c)) {
                str += tolower(c);
            }
        }
        string rev = str;
        reverse(rev.begin(), rev.end());

        
        cout << str << endl;
        cout << rev << endl;
        return str == rev;
    }
};
