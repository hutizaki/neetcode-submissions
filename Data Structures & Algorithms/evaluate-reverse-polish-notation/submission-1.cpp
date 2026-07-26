class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stk;

        for (string s : tokens) {
            if (s == "+" ||
                s == "-" ||
                s == "*" ||
                s == "/") 
            {
                // compute val_2 OP val_1
                int val_1 = stk.top();
                stk.pop();
                int val_2 = stk.top();
                stk.pop();
                if (s == "+") {
                    stk.push(val_2 + val_1);
                } else if (s == "-") {
                    stk.push(val_2 - val_1);
                } else if (s == "*") {
                    stk.push(val_2 * val_1);
                } else {
                    stk.push(val_2 / val_1);
                }
            } else {
                stk.push(stoi(s));
            }
        }
        return stk.top();
    }
};
