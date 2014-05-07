/* 
 * File:   Folder.hpp
 * Author: lhoussaine
 *
 * Created on 7 mai 2014, 09:25
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

#ifndef FOLDER_HPP
#define	FOLDER_HPP
#include <vector>

#include "AbstractFile.hpp"
#include "File.hpp"
using namespace std;

class Folder: public AbstractFile {
    
public:
    
    void Display() const;
    int GetSize() const;
    Folder& Add(Folder* file);
    void Add(File* file);
    Folder(const string& path);
    Folder(const Folder& orig);
    Folder();
    virtual ~Folder();
private:
    
    vector<AbstractFile*> listfichier;


};

#endif	/* FOLDER_HPP */

