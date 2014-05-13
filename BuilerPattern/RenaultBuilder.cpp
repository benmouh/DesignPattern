/* 
 * File:   RenaultBuilder.cpp
 * Author: lhoussaine
 * 
 * Created on 13 mai 2014, 11:06
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

#include "RenaultBuilder.hpp"
#include "Moteur.hpp"

Roue* RenaultBuilder::getRoue(){
    Roue* roue = new Roue();
    roue->size = 22;
    return roue;
}
 
Moteur* RenaultBuilder::getMoteur(){
    
    Moteur* moteur = new Moteur();
    moteur->chevaux = 400;
    return moteur;
}
 
Cadre* RenaultBuilder::getCadre(){
    
    Cadre* cadre= new Cadre();
    cadre->forme = "XYZ";
    return cadre;
}

RenaultBuilder::RenaultBuilder() {
}

RenaultBuilder::RenaultBuilder(const RenaultBuilder& orig) {
}

RenaultBuilder::~RenaultBuilder() {
}

