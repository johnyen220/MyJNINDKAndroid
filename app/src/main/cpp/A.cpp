//
//  A.cpp
//  C++
//
//  Created by 顏家揚 on 2018/12/25.
//  Copyright © 2018 顏家揚. All rights reserved.
//

#include "A.h"
#include <iostream>
using namespace::std;

Cafeshop::Cafeshop(string drink)
{
    menu(drink);
}

void Cafeshop::menu(string drink)
{
    makedrink = drink;
}

string Cafeshop::tellservice()
{
    return makedrink;
}
void Cafeshop::printreceipt()
{
    cout << "Welcome to the Niki cafe shop!You drinks:" << tellservice() << endl;
}
