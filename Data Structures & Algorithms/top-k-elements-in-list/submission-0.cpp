class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::list<std::pair<int, int>> values;
        std::unordered_map<int, int> map;

        for (std::size_t i = 0; i < nums.size(); ++i) {
            map[nums[i]]++;
        }

        for (auto [key, value] : map) {
            values.push_back({value, key});
        }

        values.sort([](auto first, auto second) { return first.first > second.first; });

        std::vector<int> res;
        std::size_t i = 0;
        for (const auto [value, key] : values) {
            if (i == k) break;
            res.push_back(key);
            ++i;    
        }
        return res;
    }
};
