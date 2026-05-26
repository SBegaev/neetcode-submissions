class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        std::vector<std::vector<int>> result;
        if (intervals.size() == 1) return intervals;

        std::sort(intervals.begin(), intervals.end());
        result.push_back(intervals[0]);

        for (auto& interval : intervals) {
            int start = interval[0];
            int end = interval[1];
            int lastEnd = result.back()[1];

            if (start <= lastEnd) {
                result.back()[1] = max(lastEnd, end); 
            } else {
                result.push_back({start, end});
            }
        }
        
        return result;
    }
};
