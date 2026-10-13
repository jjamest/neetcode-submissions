class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int first = 0, second = 0;

        string res = "";

        while (first < word1.size() || second < word2.size()) {
            if (first < word1.size()) {
                res += word1[first];
                first++;
            }
            if (second < word2.size()) {
                res += word2[second];
                second++;
            }
        }

        return res;
    }
};