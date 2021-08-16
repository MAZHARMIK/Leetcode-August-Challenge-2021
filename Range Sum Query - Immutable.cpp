class NumArray {
public:
    vector<int> sum;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        sum.resize(n);
        sum = nums;
        for(int i = 1; i<n; i++)
            sum[i] += sum[i-1];
    }
    
    int sumRange(int left, int right) {
        return left == 0 ? sum[right] : sum[right]-sum[left-1];
    }
};
