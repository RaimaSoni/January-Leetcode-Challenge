class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n= nums.size();
        vector<int> output(n);
        int k=n-1;
        for (int left=0, right=n-1; left<=right;){
            if (abs(nums[left]) > nums[right]){
                output[k--] = nums[left]*nums[left];
                left++;
            }
            else {
                output[k--] = nums[right]*nums[right];
                right--;
            }
        }
        return output;
    }
};