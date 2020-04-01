#include <vector>

std::vector<int>::iterator Find(std::vector<int>::iterator first, std::vector<int>::iterator last, int el)
{
    while (first != last)
    {
        if (*first == el) break;
        ++first;
    }
    return first;
}