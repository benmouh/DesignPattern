/* 
 * File:   Tablette.cpp
 * Author: lhoussaine
 * Email: aitbenmouh@yahoo.fr
 * 
 * Created on 5 mai 2014, 17:15
 * * * This file is part of DesignPattern.

    DesignPattern is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License.

    DesignPattern is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with DesignPattern.  If not, see <http://www.gnu.org/licenses/>
 *
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

