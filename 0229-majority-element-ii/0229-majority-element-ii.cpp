class Solution {
public:
    vector<int> majorityElement(vector<int>& a) {
        int n = a.size();
        int cnt1 = 0, cnt2 = 0;
        int el1 = INT_MIN;
        int el2 = INT_MIN;

        for (int i = 0; i < n; i++) {
            if (cnt1 == 0 && a[i] != el2) {
                cnt1 = 1;
                el1 = a[i];
            }
            else if (cnt2 == 0 && a[i] != el1) {
                cnt2 = 1;
                el2 = a[i];
            }

            else if (a[i] == el1) cnt1++;
            else if (a[i] == el2) cnt2++;

            else {
                cnt1--, cnt2--;
            }
        }
        vector<int> ls;
        cnt1 = 0, cnt2 = 0;

        for (int i = 0; i < n; i++) {
            if (el1 == a[i]) cnt1++;
            if (el2 == a[i]) cnt2++;
        }
        int mini = n / 3 + 1;

        if (cnt1 >= mini) ls.push_back(el1);
        if (cnt2 >= mini) ls.push_back(el2);
        sort (ls.begin(), ls.end());
        return ls;
    }
};