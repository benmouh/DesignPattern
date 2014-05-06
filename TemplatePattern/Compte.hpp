/* 
 * File:   Compte.hpp
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

#ifndef COMPTE_HPP
#define	COMPTE_HPP

class Compte {
public:
    
    Compte();
    virtual void Start() = 0;
    virtual void Allow() = 0;
    virtual void End() = 0;
    virtual double MaxLimit() = 0;
    
    //this a template method
    void Retirer(double montant);
    Compte(const Compte& orig);
    virtual ~Compte();
private:

};

#endif	/* COMPTE_HPP */

