class Solution {
public:

    string encode(vector<string>& strs) {
        std::string encoded;
        for (auto& str : strs) {
            encoded += str;
            encoded += '~';
            // encoded += std::to_string(str.size) + '#' + str;
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

    /*
    vector<string> decode(string s) {
        vector<string> res;
        int i = 0;
        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            j = i + length;
            res.push_back(s.substr(i, length));
            i = j;
        }
        return res;
    }
    */
};
