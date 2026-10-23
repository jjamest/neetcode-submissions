class TimeMap {
private:
    unordered_map<string, vector<pair<string, int>>> m;
public:
    TimeMap() {}
    
    void set(string key, string value, int timestamp) {
        m[key].emplace_back(value, timestamp);
    }
    
    string get(string key, int timestamp) {
        int l = 0, r = m[key].size() - 1;

        int res = -1;

        while (l <= r) {
            int mid = l + (r - l) / 2;

            if (m[key][mid].second <= timestamp) {
                l = mid + 1;
                res = mid;
            } else {
                r = mid - 1;
            }
        }

        return res == -1 ? "" : m[key][res].first;
    }
};
