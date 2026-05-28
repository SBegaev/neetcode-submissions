class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int size = static_cast<int>(nums.size());
        std::sort(nums.begin(), nums.end());
        std::vector<std::vector<int>> v;       

        for (int i = 0; i < size; ++i) {
            int num = nums[i];
            if (num > 0) return v;
            if (i > 0 && nums[i] == nums[i - 1]) continue;

            int l = i + 1;
            int r = size - 1;

            while (l < r) {
                int threeSum = num + nums[l] + nums[r];

                if (threeSum > 0) {
                    --r;
                } else if (threeSum < 0) {
                    ++l;
                } else {
                    v.push_back({num, nums[l], nums[r]});
                    --r; 
                    ++l;
                    while (l < r && nums[l] == nums[l - 1]) {
                        l++;
                    }
                }
            }
        }

        return v; 
    }
};
