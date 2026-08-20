class Solution {
public:
    vector<int> resultArray(vector<int>& a) {
        vector<int> a1, a2;
        int n = a.size();

        a1.push_back(a[0]);
        a2.push_back(a[1]);

        for (int i = 2; i < n; i++) {

            if (a1.back() > a2.back()) {
                a1.push_back(a[i]);
            }
            else {
                a2.push_back(a[i]);
            }
        }
        for (int i = 0; i < a2.size(); i++) {
            a1.push_back(a2[i]);    
        }
        return a1;
    }
};