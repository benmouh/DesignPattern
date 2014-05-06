/* 
 * File:   CompteNormal.cpp
 * Author: lhoussaine
 * 
 * Created on 6 mai 2014, 16:57
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

