/* 
 * File:   Phone.cpp
 * Author: lhoussaine
 * 
 * Created on 5 mai 2014, 17:11
 */
#include <string>
#include <iostream>
#include "Phone.hpp"

using namespace std;

Phone::Phone() {
}

Phone::Phone(const Phone& orig) {
}
string Phone::Camera() {
        return "Phone camera: 2 px";
    }

string Phone::Ecran() {
        return "Phone screen : résolution 60x80px";
    }
Phone::~Phone() {
}

