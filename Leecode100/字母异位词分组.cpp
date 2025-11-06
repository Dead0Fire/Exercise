#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>

class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::unordered_map<std::string, std::vector<std::string>> mp;
        for (auto& s : strs) {
            std::string sorted = s;
            std::sort(sorted.begin(), sorted.end());
            mp[sorted].push_back(s);
        }
        std::vector<std::vector<std::string>> res;
        res.reserve(mp.size());
        for (auto& entry : mp) {
            res.push_back(std::move(entry.second));
        }
        return res;
    }
};
