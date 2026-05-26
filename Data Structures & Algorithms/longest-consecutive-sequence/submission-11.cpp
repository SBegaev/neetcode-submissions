class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        std::unordered_set<int> set(nums.begin(), nums.end());
        if (set.size() == 1) return 1;
        
        // Если num не имеет (num - 1) числа в set, значит от этого num ищем все числа, 
        // прибавляя единицу, пока не прервёмся. 
        int result = 0;
        for (auto num : set) {
            if (!set.contains(num - 1)) {
                int len = 1;
                while (set.contains(num + len)) {
                    len++;
                }
                result = std::max(result, len);
            }
        }

        return result;
    }
};
