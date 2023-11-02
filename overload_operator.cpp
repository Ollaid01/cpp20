#include <iostream>
#include <string>
#include <string_view>
#include <fmt/format.h>

using namespace std;

int main(int argc, char* argv[]) {

    // creates strings
    string s1{"happy"}; // initialize str from char*
    string s2{" birthday"}; // initialize str from char*
    string s3; // str empty
    string str_view{"hello"}; // initialize str_view from char*

    // output string and string_view
    cout << fmt::format("s1: \"{}\"; s2: \"{}\"; s3: \"{}\"; str_view: \"{}\"\n\n", s1, s2, s3, str_view);

    // test overload equality and relational operator
    cout << "The resuls of comparing s2 and s1: \n"
         << fmt::format("s2 == s1 : {} \n", s1==s2);

    // test overloade string concatenation
    s1+=s2;
    cout << fmt::format("s1+=s2 yiels s1 = {} \n", s1);

    return 0;
}