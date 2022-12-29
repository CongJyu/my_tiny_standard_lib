//
// My Tiny Standard Library
// Test
// Created by CongJyu Chen
//

#include <iostream>
#include "MyTinyVector.h"

int main() {
    std::cout << "==== TEST START ====" << std::endl;
    MyTinyVector<int> test;
    for (int i{}; i < 5; ++i) {
        test.push_back(i);
    }
    for (int i{}; i < 5; ++i) {
        std::cout << test[i] << " ";
    }
    std::cout << std::endl;
    test.pop_back();
    test.pop_back();
    test.pop_back();
    for (int i{}; i < test.size(); ++i) {
        std::cout << test[i] << " ";
    }
    std::cout << std::endl;
    std::cout << "==== TEST END ====" << std::endl;
    return 0;
}
