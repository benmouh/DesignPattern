/* 
 * File:   Mobile.cpp
 * Author: lhoussaine
 * 
 * Created on 5 mai 2014, 16:55
 */

#include "Mobile.hpp"

Mobile::Mobile() {
}

Mobile::Mobile(const Mobile& orig) {
}

void Mobile::PrintSpecs() {
        cout << Camera() << endl;
        cout << Ecran() << endl;
    }

Mobile::~Mobile() {
}

