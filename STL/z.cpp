#include <string>

const std::string& getRef(); // some function that returns a reference to const

int main()
{
    auto ref1{ getRef() }; // std::string (top-level const and reference dropped)

    return 0;
}