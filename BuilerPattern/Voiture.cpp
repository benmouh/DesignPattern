/* 
 * File:   Voiture.cpp
 * Author: lhoussaine
 * 
 * Created on 13 mai 2014, 11:05
 * 
 *  * * * This file is part of DesignPattern.

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

#include "Voiture.hpp"
#include "Cadre.hpp"
#include "Moteur.hpp"

using namespace std;

void Voiture::specifications(){
 
    cout << "Forme de cadre:   " << cadre->forme << endl;
    cout << "Chevaux du moteur:" << moteur->chevaux << endl;
    cout << "Taille des roues: " << roue[0]->size << "cm" << endl;
 }

Voiture::Voiture() {
}

Voiture::Voiture(const Voiture& orig) {
}

Voiture::~Voiture() {
}

