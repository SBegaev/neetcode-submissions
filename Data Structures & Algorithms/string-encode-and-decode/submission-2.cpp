class Solution {
public:

    string encode(vector<string>& strs) {
        std::string result;
        for (auto&& str : strs) {
            result += str;
            result += '~';
        }
        return result;
    }

    vector<string> decode(string s) {
        std::stringstream stream(s);
        std::vector<string> result;
        std::string str;
        while (std::getline(stream, str, '~')) {
            result.push_back(str);
        }
        return result;
    }
};
