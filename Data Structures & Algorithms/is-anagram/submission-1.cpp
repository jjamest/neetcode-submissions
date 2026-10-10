class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> c;

        for (int i = 0; i < s.size(); i++) {
            c[s[i]] += 1;
        }

        for (int i = 0; i < t.size(); i++) {
            c[t[i]] -= 1;
        }

        for (auto p : c) {
            if (p.second != 0) {
                return false;
            }
        }
        return true;
    }
};
