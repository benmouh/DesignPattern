/* 
 * File:   Phone.hpp
 * Author: lhoussaine
 * Email: aitbenmouh@yahoo.fr
 *
 * Created on 5 mai 2014, 17:11
 * 
 * * This file is part of DesignPattern.

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

#ifndef PHONE_HPP
#define	PHONE_HPP
#include <string>
#include <iostream>
#include "Mobile.hpp"

using namespace std;

class Phone: public Mobile {
public:
    Phone();
    Phone(const Phone& orig);
    string Camera();
    string Ecran();
    virtual ~Phone();
private:

};

#endif	/* PHONE_HPP */

