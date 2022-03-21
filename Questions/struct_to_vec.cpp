#include <iostream>
#include <vector>

using namespace std;

struct MyStruct
{
    int a;
    int b;
    char *c;
};

vector<std::variant<type1, type2, type3>> buffer;

int main()
{
    MyStruct s;

    auto ptr = reinterpret_cast<int*>(&s);
    auto buffer = vector<int>(ptr, ptr + sizeof s);

}