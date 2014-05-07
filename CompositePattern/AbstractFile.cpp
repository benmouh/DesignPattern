/* 
 * File:   AbstractFile.cpp
 * Author: lhoussaine
 * 
 * Created on 7 mai 2014, 09:14
 * 
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

#include "AbstractFile.hpp"

const int AbstractFile::file_size = 1;

AbstractFile::AbstractFile() {
}
int AbstractFile::GetSize() const{
    
    return file_size;
}
void AbstractFile::Display() const{
    
    cout << file_name <<"Taille: "<< GetSize();
}
AbstractFile::AbstractFile(const string& name):file_name(name){
   

}

AbstractFile::AbstractFile(const AbstractFile& orig) {
}

AbstractFile::~AbstractFile() {
}

