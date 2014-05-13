/* 
 * File:   Moteur.hpp
 * Author: lhoussaine
 *
 * Created on 13 mai 2014, 11:04
 * 
 *  *  * * * This file is part of DesignPattern.

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

#ifndef MOTEUR_HPP
#define	MOTEUR_HPP

class Moteur {
public:
    
    int chevaux; 
    Moteur();
    Moteur(const Moteur& orig);
    virtual ~Moteur();
private:

};

#endif	/* MOTEUR_HPP */

