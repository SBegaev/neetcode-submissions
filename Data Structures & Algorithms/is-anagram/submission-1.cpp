class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
          return false;
          
        // O(n*logN + m*logM)
        std::ranges::sort(s);
        std::ranges::sort(t);
        if (s == t) return true;
        return false;

        /*
        // O(n + m)
        std::unordered_map<char, int> count_s;
        std::unordered_map<char, int> count_t;

        */
    }
};
