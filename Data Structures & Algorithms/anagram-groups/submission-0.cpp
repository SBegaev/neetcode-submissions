class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
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
    }
};
