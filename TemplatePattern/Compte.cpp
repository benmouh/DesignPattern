/* 
 * File:   Compte.cpp
 * Author: lhoussaine
 * 
 * Created on 6 mai 2014, 16:46
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

