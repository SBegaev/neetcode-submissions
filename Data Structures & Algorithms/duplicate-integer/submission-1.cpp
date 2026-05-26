class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> set;
        for (const auto val : nums) {
            if (set.contains(val)) return true;
            set.insert(val);
        }
        return false;
    }
};