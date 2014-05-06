/* 
 * File:   ComptePrivilged.cpp
 * Author: lhoussaine
 * 
 * Created on 6 mai 2014, 17:06
 * 
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
 * 
 */
#include <iostream>
#include "ComptePrivilged.hpp"

using namespace std;

ComptePrivilged::ComptePrivilged() {
}

void ComptePrivilged::Start(){
    
    cout << "Starting priviliged ..." << endl;
}
void ComptePrivilged::Allow(){
    
    cout << "Allowing processus ..." << endl;
}
void ComptePrivilged::End(){
    
    cout << "Ending job ..." << endl;
}
double ComptePrivilged::MaxLimit(){
    
     return 10000;
}

ComptePrivilged::ComptePrivilged(const ComptePrivilged& orig) {
}

ComptePrivilged::~ComptePrivilged() {
}

