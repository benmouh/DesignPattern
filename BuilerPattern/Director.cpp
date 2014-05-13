/* 
 * File:   Director.cpp
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

#include "Director.hpp"
#include "Voiture.hpp"
#include "Builder.hpp"


void Director::setBuilder(Builder* newBuilder)
{
builder = newBuilder;
}

Voiture* Director::getVoiture()
{
Voiture* voiture = new Voiture();
 
voiture->cadre = builder->getCadre();
 
voiture->moteur = builder->getMoteur();
 
voiture->roue[0] = builder->getRoue();
voiture->roue[1] = builder->getRoue();
voiture->roue[2] = builder->getRoue();
voiture->roue[3] = builder->getRoue();
 
return voiture;
}
Director::Director() {
}

Director::Director(const Director& orig) {
}

Director::~Director() {
}

