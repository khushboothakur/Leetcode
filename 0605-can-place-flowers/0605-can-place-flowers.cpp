class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int m) {
        int n = flowerbed.size();
        
        for (int i = 0; i < n; i++) {
            
            if (flowerbed[i] == 0) {

                bool left_khali = (i == 0 || flowerbed[i - 1] == 0);
                bool right_khali = (i == n - 1 || flowerbed[i + 1] == 0);

                if (left_khali && right_khali) {
                    flowerbed[i] = 1;
                    m--;
                }
            }
        }
        return m <= 0;
    }
};