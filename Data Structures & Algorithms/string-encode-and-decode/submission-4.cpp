class Solution {
public:

    string encode(vector<string>& strs) {
        std::string encoded;
        for (auto& str : strs) {
            encoded += str;
            encoded += '~';
        }

        return encoded;
    }

    vector<string> decode(string s) {
        std::stringstream stream(s);
        std::vector<string> result;
        std::string str;

        while(std::getline(stream, str, '~')) {
            result.push_back(str);
        }

        return result;
    }
};
