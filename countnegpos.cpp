class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int pos = 0;
        int neg = 0;
        int zer = 0;
        for(int i = 0; i<nums.size(); i++)
        {
            if(nums[i]<0)
            {
                neg++;
            }
            else if(nums[i] == 0)
            {
                zer++;
            }
            else
            {
                pos++;
            }
        }
        if(neg>pos)
        {
            return neg;
        }
        else
        {
            return pos;
        }
    }
};