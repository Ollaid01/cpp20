/**
 * @file fig04_01.cpp
 * @author your name (you@domain.com)
 * @brief Standard Library class (basic string manipulation class)
 * @version 0.1
 * @date 2023-10-05
 * 
 * @copyright Copyright (c) 2023
 * 
 */

#include <iostream>
#include <string>

using namespace std;


int main() {

    string s1{"happy"}; // create a string and initialize it with "happy"
    string s2{"birthday"};
    string s3; // create an empty string

    // display the string and shox their length
    cout << "s1 : \"" << s1 << "\"; length: " << s1.length() << endl;
    cout << "s2 : \"" << s2 << "\"; length: " << s2.length() << endl;
    cout << "s3 : \"" << s3 << "\"; length: " << s3.length() << endl;

    // The results of comparing s2 and s1: 
    cout << "s1 == s2 : " << boolalpha << (s2 == s1) << endl;  // boolapha is string manipulator (convert 0/1 to false/true - noboolalpha)
    cout << "s1 != s2 : " <<  (s2 != s1) << endl;

    // Test string member function empty
    cout << " Testing s3 empty : " << s3.empty() << endl;

    // Assigning to s3
    cout << "s3 is empty; assigning to s3 : " << s3.assign(s1 + ' ' +  s2) << endl;

    // check what string start with
    cout << "s1 starts with \"ha\" : " << s1.starts_with("ha") << endl;
    cout << "s2 starts with \"ha\" : " << s2.starts_with("ha") << endl;
    cout << "s1 ends with \"ay\" : " << s1.ends_with("ay") << endl;
    cout << "s2 ends with \"ay\" : " << s2.ends_with("ay") << endl;

    return 0;
}