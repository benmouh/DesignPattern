/* 
 * File:   ComptePrivilged.cpp
 * Author: lhoussaine
 * 
 * Created on 6 mai 2014, 17:06
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

