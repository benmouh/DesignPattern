/* 
 * File:   Voiture.hpp
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

#ifndef VOITURE_HPP
#define	VOITURE_HPP
#include "Roue.hpp"
#include "Cadre.hpp"
#include "Moteur.hpp"

class Voiture {
public:
    
    Roue* roue[4];
    Moteur* moteur;
    Cadre* cadre;
    void specifications();
    Voiture();
    Voiture(const Voiture& orig);
    virtual ~Voiture();
private:

};

#endif	/* VOITURE_HPP */

