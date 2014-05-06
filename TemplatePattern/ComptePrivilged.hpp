/* 
 * File:   ComptePrivilged.hpp
 * Author: lhoussaine
 *
 * Created on 6 mai 2014, 17:06
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

#ifndef COMPTEPRIVILGED_HPP
#define	COMPTEPRIVILGED_HPP
#include "Compte.hpp"

class ComptePrivilged:public Compte {
public:
    ComptePrivilged();
    void Start();
    void Allow();
    void End();
    double MaxLimit();
    ComptePrivilged(const ComptePrivilged& orig);
    virtual ~ComptePrivilged();
private:

};

#endif	/* COMPTEPRIVILGED_HPP */

