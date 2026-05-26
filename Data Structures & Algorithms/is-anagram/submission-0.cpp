class Solution {
public:
    bool isAnagram(string s, string t) {
        std::ranges::sort(s);
        std::ranges::sort(t);
        if (s == t) return true;
        return false;
    }
};
