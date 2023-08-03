class Solution
{
public:
    void rotate(vector<int>& nums, int k)
    {
        int nums_size = nums.size();
        k = k % nums_size;
        
        // Önce tüm diziyi ters çevir
        reverse(nums.begin(), nums.end());
        
        // Sonra k adım sağa doğru kaydır
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
