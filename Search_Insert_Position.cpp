class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
    for(int i = 0; i < nums.size(); i++ )
    {
        if(nums[i] == target || target < nums[i])
        return i;
        else if(i+1 == nums.size())
        return (i+1);
    }
    return(0);
    }
};
