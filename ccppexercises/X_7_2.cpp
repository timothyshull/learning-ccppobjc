//
//  main.cpp
//  CppWorkspace
//
//  Created by Tim on 11/13/14.
//  Copyright (c) 2014 TimShull. All rights reserved.
//

#include <iostream>
using namespace std;

int main(){
    char c;
    c = 255;
    
    int i = c;
    
    if (i == -1){
        cout<<"signed \n";
    }
    else {
        cout<<"unsigned \n";
    }
    return 0;
}
