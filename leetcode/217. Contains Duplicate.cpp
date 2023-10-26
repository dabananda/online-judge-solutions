class Solution {
 public:
  bool containsDuplicate(vector<int>& nums) {
    int size = nums.size();
    sort(nums.begin(), nums.end());
    for (int i = 1; i < size; i++) {
      if (nums[i] == nums[i - 1]) {
        return true;
      }
    }
    return false;
  }
};