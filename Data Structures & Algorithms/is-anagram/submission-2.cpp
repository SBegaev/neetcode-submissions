class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
          return false;
          
        // O(n*logN + m*logM) Медленное решение
        /*
        std::ranges::sort(s);
        std::ranges::sort(t);
        if (s == t) return true;
        return false;
        */

        
        // O(n + m)
        std::array<int, 26> arr{0};
        for (auto& c : s) {
            arr[c - 'a']++; 
        }
        for (auto& c : t) {
            arr[c - 'a']--;
            if (arr[c - 'a'] < 0) return false;
        }

        return true;
    }
};
