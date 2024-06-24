#pragma once

#include <set>
#include <string>
#include <vector>

vector<string> SplitIntoWords(const string& text);

template <typename StringContainer>
std::set<string> MakeUniqueNonEmptyStrings(const StringContainer& strings) {
    std::set<string> non_empty_strings;
    for (const std::string& str : strings) 
    {
        if (!str.empty()) {
            non_empty_strings.insert(str);
        }
    }
    return non_empty_strings;
}
