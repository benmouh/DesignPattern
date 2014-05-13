/* 
 * File:   FiatBuilder.cpp
 * Author: lhoussaine
 * 
 * Created on 13 mai 2014, 11:07
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

#include "FiatBuilder.hpp"

Roue* FiatBuilder::getRoue(){
    Roue* roue = new Roue();
    roue->size = 33;
    return roue;
}
 
Moteur* FiatBuilder::getMoteur(){
    
    Moteur* moteur = new Moteur();
    moteur->chevaux = 200;
    return moteur;
}
 
Cadre* FiatBuilder::getCadre(){
    
    Cadre* cadre= new Cadre();
    cadre->forme = "ABCD";
    return cadre;
}

FiatBuilder::FiatBuilder() {
}

FiatBuilder::FiatBuilder(const FiatBuilder& orig) {
}

FiatBuilder::~FiatBuilder() {
}

