class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int result = 0;
        std::unordered_set<int> set;

        for (int r = 0; r < s.size(); ++r) {             
            
            while (set.contains(s[r])) {
                set.erase(s[l]);
                l++;
            }

            set.insert(s[r]);
            result = std::max(result, r - l + 1);       
        }
        return result;
    }
};
