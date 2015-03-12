//
//  main.cpp
//  CppWorkspace
//
//  Created by Tim on 11/13/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//

#include <limits> // §40.2
#include <iostream>

using namespace std;

int main() {
    cout << "size of long " << sizeof(1L) << '\n';
    cout << "size of long long " << sizeof(1LL) << '\n';
    cout << "largest float == " << std::numeric_limits<float>::max() << '\n';
    cout << "char is signed == " << std::numeric_limits<char>::is_signed << '\n';
}