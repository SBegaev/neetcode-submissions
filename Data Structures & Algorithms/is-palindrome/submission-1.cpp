class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;

        std::string palindrom;
        for (const auto& c : s) {
            if (std::isalnum(c)) {
                palindrom.push_back(std::tolower(c));
            }
        }
        
        int end = (int)palindrom.size() - 1;
        while (start < end) {
            if (palindrom[start] != palindrom[end]) return false;
            ++start;
            --end;
        }

        return true;
    }

};