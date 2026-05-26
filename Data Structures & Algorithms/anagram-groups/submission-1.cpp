class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Моё решение
        std::unordered_map<std::string, std::vector<int>> map;
        for (std::size_t i = 0; i < strs.size(); ++i) {
            auto str = strs[i];
            std::ranges::sort(str);
            map[str].push_back(i);
        }

        vector<vector<string>> result;
        for (auto&& [key, value] : map) {
            std::vector<string> anagrams;
            for (auto i : value) {
                anagrams.push_back(strs[i]);
            }
            result.push_back(std::move(anagrams));
        }

        return result;

        // Быстрое решение
        /*
        unordered_map<string, vector<string>> res;
        for (const auto& s : strs) {
            vector<int> count(26, 0);
            for (char c : s) {
                count[c - 'a']++;
            }
            string key = to_string(count[0]);
            for (int i = 1; i < 26; ++i) {
                key += ',' + to_string(count[i]);
            }
            res[key].push_back(s);
        }
        vector<vector<string>> result;
        for (const auto& pair : res) {
            result.push_back(pair.second);
        }
        return result;
        */
    }
};
