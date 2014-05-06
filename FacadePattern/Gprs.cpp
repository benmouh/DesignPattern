/* 
 * File:   GPRS.cpp
 * Author: lhoussaine
 * 
 * Created on 6 mai 2014, 10:27
 * 
 * * * This file is part of Copyright@DesignPattern.

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
 * 
 */

#include "Gprs.hpp"
#include "CodeErreur.hpp"

using namespace std;

Gprs::Gprs() {
}

bool Gprs::isAvailable()
{
        return false;
}

int Gprs::connect()
{
    
        
        cout << "Connecting via Gprs..." << endl;
        return 0;
    
        
     //   cout << "error code: " << error_connexion << endl;
     //   return error_connexion;
    
        
        

}

int Gprs::send(string trx)
{
        cout << trx << " sent via GPRS." << endl;
        
        return 0;
}


Gprs::Gprs(const Gprs& orig) {
}

Gprs::~Gprs() {
}

