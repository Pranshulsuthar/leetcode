class Solution {
public:
    int majorityElement(vector<int>& nums) {

        int X = 0;
        int count = 0;

        for(int i = 0; i < nums.size(); i++) {

            if(count == 0)
                X = nums[i];

            if(nums[i] == X)
                count++;
            else
                count--;
        }

        return X;
    }
};