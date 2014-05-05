/* 
 * File:   Tablette.cpp
 * Author: lhoussaine
 * 
 * Created on 5 mai 2014, 17:15
 */
#include <string>
#include <iostream>
#include "Tablette.hpp"

using namespace std;


Tablette::Tablette() {
}

Tablette::Tablette(const Tablette& orig) {
}


string Tablette::Camera() {
        return "Tablette camera: 12 px";
    }

string Tablette::Ecran() {
        return "Tablette screen: résolution 600x800px";
    }

Tablette::~Tablette() {
}

