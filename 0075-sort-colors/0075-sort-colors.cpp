class Solution {
public:
    void sortColors(vector<int>& nums) {

        int temp, index;
        
        for (int i = 0; i < nums.size() - 1; i++)
        {
            index = i;
            for (int j = i + 1; j < nums.size(); j++)
            {
                if (nums[index] > nums[j])
                {
                    index = j;
                }
            }
            temp = nums[i];
            nums[i] = nums[index];
            nums[index] = temp;
        }
    }
};