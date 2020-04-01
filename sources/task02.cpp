#include <vector>

std::vector<int>::iterator findInSorted(std::vector<int>::iterator first, std::vector<int>::iterator last, int el)
{
    while (first != last)
    {
        if (*first == el) break;
        if (*first > el)
        {
            first = last;
            break;
        }
        ++first;
    }
    return first;
}