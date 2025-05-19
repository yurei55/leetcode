class Solution 
{
public:
    int singleNumber(vector<int>& nums) 
    {
        for (int i=0; i < nums.size(); i++)
        {
            bool isSingle = true;
            for (int j=0; j < nums.size(); j++)
            {
                if (i != j && nums[i] == nums[j])
                {
                    isSingle = false;
                    break;
                }
            }
            if (isSingle)
            {
                return nums[i];
            }
        }
        return -1;
    }
};