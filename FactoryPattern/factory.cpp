
/* 
 * File:   factory.cpp
 * Author: lhoussaine
 *
 * Created on 29 avril 2014, 16:45
 */

#include <iostream>
#include <string>
#include "factory.hpp"

using namespace std;

Mobile* MobileFactory::GetMobile(string type) {
    if (type == "Phone") return new Phone();
    if (type == "Tablette") return new Tablette();
    return NULL;
}
