1class Solution {
2public:
3    int countIntersectingIntervals(vector<vector<int>>& a) {
4        sort( a.begin(), a.end());
5        int ans =0;
6        vector<int>b;
7        for( int i=0;i<a.size();i++){
8            b.push_back(a[i][1]);
9        }
10        // int ans =0;
11        sort(b.begin(), b.end());
12        for( int i=0;i<a.size();i++){
13            int x = a[i][0];
14            int p = lower_bound(b.begin(), b.end(),x)-b.begin();
15            ans+=i-p;
16        }
17        return ans;
18    }
19};