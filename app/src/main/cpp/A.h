//
//  A.hpp
//  C++
//
//  Created by 顏家揚 on 2018/12/25.
//  Copyright © 2018 顏家揚. All rights reserved.
//

#ifndef A_h
#define A_h

#include <stdio.h>
#include <string>

using std::string;

class Cafeshop
{
public:
    Cafeshop(string);
    void menu(string);
    string tellservice();
    void printreceipt();
private:
    string makedrink;
};




#endif /* A_hpp */
