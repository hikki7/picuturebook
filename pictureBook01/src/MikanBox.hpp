//
//  MikanBox.hpp
//  myHandySketch
//
//  Created by 引田祐樹 on 2018/12/20.
//

#pragma once
#ifndef MikanBox_hpp
#define MikanBox_hpp

#include <stdio.h>
#include "ofMain.h"

class MikanBox{
  
public:
    MikanBox();
    ~MikanBox();
    void Add(int addmikan);
    void Del(int delmikan);
    void Empty();
    int GetTotal(){
        return total;
    }
    
private:
    int total;
    
};

#endif /* MikanBox_hpp */
