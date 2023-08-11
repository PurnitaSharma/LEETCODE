class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> temp(amount+1 , 0);
        temp[0] = 1;
        for(int coin : coins)
        {
            for(int j = coin ; j<=amount ; j++)
                temp[j] += temp[j-coin];
        }
        return temp[amount];
    }
};