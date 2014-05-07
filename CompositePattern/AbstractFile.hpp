/* 
 * File:   AbstractFile.hpp
 * Author: lhoussaine
 *
 * Created on 7 mai 2014, 09:14
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

#ifndef ABSTRACTFILE_HPP
#define	ABSTRACTFILE_HPP
#include <iostream>
using namespace std;

class AbstractFile {
public:
    
    static const int file_size;
    virtual int GetSize() const;
    virtual void Display() const ;

    AbstractFile();
    AbstractFile(const string& name);
    AbstractFile(const AbstractFile& orig);
    virtual ~AbstractFile();
    
protected:
    
    string file_name;
    
private:

};

#endif	/* ABSTRACTFILE_HPP */

