//
//  MikanBox.cpp
//  myHandySketch
//
//  Created by 引田祐樹 on 2018/12/20.
//

#include "MikanBox.hpp"

MikanBox::MikanBox(){
    total=0;
}

MikanBox::~MikanBox(){
    cout<<"任務完了"<<endl;
}

void MikanBox::Add(int addmikan){
    total+=addmikan;
    if(total>100){
        total=100;
    }
}

void MikanBox::Del(int delmikan){
    total-=delmikan;
}

void MikanBox::Empty(){
    total=0;
}
