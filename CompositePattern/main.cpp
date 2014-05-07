/* 
 * File:   main.cpp
 * Author: lhoussaine
 *
 * Created on 7 mai 2014, 09:13
 * 
 *  * This file is part of Copyright@DesignPattern.

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

#include <cstdlib>

#include "Folder.hpp"

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    
    
    Folder Racine("/");
    Racine.Add(new Folder("home/")).Add(new Folder("devl/")).Add(new File("log.h","text"));
    Racine.Display();

    return 0;
}

