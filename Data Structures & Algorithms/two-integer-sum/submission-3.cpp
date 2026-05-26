class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*int i = 0;
        for (int i = 0; i < nums.size() - 1; ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
              if (nums[i] + nums[j] == target) 
                return {i, j};
            }
        }*/

        std::unordered_map<int, int> map; // K = nums, V = idx
        for (int i = 0; i < nums.size(); ++i) {
            map[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); ++i) {
            int val = target - nums[i];
            if (map.contains(val) && map[val] != i) {
                return {i, map[val]};
            }        
        }
                
        return {};
    }
};
