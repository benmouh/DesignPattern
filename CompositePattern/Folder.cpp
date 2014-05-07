/* 
 * File:   Folder.cpp
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

#include "Folder.hpp"

Folder::Folder() {
}

void Folder::Display() const{
    
    //pour chaque élément du vecteur, on l'affiche
        vector<AbstractFile*>::const_iterator it=listfichier.begin();
        const vector<AbstractFile*>::const_iterator itend=listfichier.end();

        cout<<"["<< file_name <<"]";
        for(;it!=itend;it++)
        {
            (*it)->Display();
        };
}

int Folder::GetSize() const{
    
      
        int Total_size=0;
        
        vector<AbstractFile*>::const_iterator it=listfichier.begin();
        const vector<AbstractFile*>::const_iterator itend=listfichier.end();

        for(;it!=itend;it++)
        {
        Total_size+=(*it)->GetSize();        
        }
        
        return Total_size;
}

Folder& Folder::Add(Folder* file){
    
      listfichier.push_back(file);
      return (*file);    
}

void Folder::Add(File* file){
    
    listfichier.push_back(file);
}

Folder::Folder(const string& path):AbstractFile(path){

}

Folder::Folder(const Folder& orig) {
}

Folder::~Folder() {
    

        vector<AbstractFile*>::const_iterator it=listfichier.begin();
        const vector<AbstractFile*>::const_iterator itend=listfichier.end();

        for(;it!=itend;it++)
        {
            delete (*it); 
        }
}

