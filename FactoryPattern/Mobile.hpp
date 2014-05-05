/* 
 * File:   Mobile.hpp
 * Author: lhoussaine
 *
 * Created on 5 mai 2014, 16:55
 * This file is part of DesignPattern.

    DesignPattern is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License.

    DesignPattern is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with DesignPattern.  If not, see <http://www.gnu.org/licenses/>
 */


#ifndef MOBILE_HPP
#define	MOBILE_HPP
#include <string>
#include <iostream>
using namespace std;

class Mobile {
public:
    
    Mobile();
    Mobile(const Mobile& orig);
    virtual string Camera() = 0;
    virtual string Ecran() = 0;
    void PrintSpecs();
    virtual ~Mobile();
    
private:

};

#endif	/* MOBILE_HPP */

