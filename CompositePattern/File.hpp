/* 
 * File:   File.hpp
 * Author: lhoussaine
 *
 * Created on 7 mai 2014, 09:20
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

#ifndef FILE_HPP
#define	FILE_HPP
#include "AbstractFile.hpp"
using namespace std;

class File: public AbstractFile {
public:
    
    void Display() const ;
    File();
    File(const string& name,const string& type);
    File(const File& orig);
    virtual ~File();
    
private:
    
    string file_type;

};

#endif	/* FILE_HPP */

