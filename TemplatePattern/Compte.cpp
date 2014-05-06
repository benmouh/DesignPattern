/* 
 * File:   Compte.cpp
 * Author: lhoussaine
 * 
 * Created on 6 mai 2014, 16:46
 */
#include <iostream>
#include "Compte.hpp"

using namespace std;

Compte::Compte() {
}

void Compte::Retirer(double montant){
    
      Start();
      
      double limit = MaxLimit();
      
      if ( montant < limit ) {
          
          Allow();
          
      }
      else {
          
          cout << "vous pouvez pas retirer" << endl;
          
      }

      End();
}

Compte::Compte(const Compte& orig) {
}

Compte::~Compte() {
}

