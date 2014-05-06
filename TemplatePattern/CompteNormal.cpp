/* 
 * File:   CompteNormal.cpp
 * Author: lhoussaine
 * 
 * Created on 6 mai 2014, 16:57
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
#include "CompteNormal.hpp"

using namespace std;

CompteNormal::CompteNormal() {
}
void CompteNormal::Start(){
    
    cout << "Starting normal ..." << endl;
}
void CompteNormal::Allow(){
    
    cout << "Allowing processus ..." << endl;
}
void CompteNormal::End(){
    
    cout << "Ending job..." << endl;
}
double CompteNormal::MaxLimit(){
    
     return 2000;
}
CompteNormal::CompteNormal(const CompteNormal& orig) {
}

CompteNormal::~CompteNormal() {
}

