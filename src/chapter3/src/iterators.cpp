#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

int main()
{
    using KeyMap = std::unordered_map<std::string, int>;
    KeyMap keyMap;

    keyMap["one"] = 1;
    keyMap["two"] = 2;

    for (const auto& keyValuePair : keyMap)
    {
        std::cout << keyValuePair.first << ": " << keyValuePair.second << std::endl;
    }

    std::cout << std::endl;

    for (KeyMap::const_iterator it = keyMap.begin();
        it != keyMap.end(); it++)
    {
        auto& key = it->first;
        auto& value = it->second;

        std::cout << key << ": " << value << std::endl;
    }

    std::cout << std::endl;

    for (auto km : keyMap)
    {
        auto& key = km.first;
        auto& value = km.second;


        std::cout << key << ": " << value << std::endl;
    }

    std::cout << std::endl;

    // c++ 17 
    for (auto [key, value] : keyMap)
    {
        std::cout << key << ": " << value << std::endl;
    }

    return 0;
}