class Solution {
public:
    bool isValid(string s) {
        if (s.length() == 1) return false;

        std::unordered_map<char, char> brackets = 
            {{'(', ')'},
             {'{', '}'},
             {'[', ']'}};

        std::stack<char> br_stack;
        
        for (const char& c : s) {
            if (brackets.contains(c)) {
                br_stack.push(c);
            } else {
                if (br_stack.empty()) {
                    return false;        
                }
                auto open_br = br_stack.top();
                if (brackets[open_br] == c) {
                    br_stack.pop();
                } else {
                    return false;
                }
            }
        }

        return br_stack.empty();     
    }
};
