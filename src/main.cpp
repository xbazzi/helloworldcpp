#include <algorithm>
#include <cstdint>
#include <iostream>
#include <vector>

int main()
{
    int x = 5;
    // std::print("hello world {}", x);
    std::cerr << "helloworld " << x << '\n';
    std::vector<std::uint64_t> uints;
    std::for_each(uints.begin(), uints.end(), [](const auto &i) { std::cout << i << " "; });

    return 0;
}
