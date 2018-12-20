//
//  woman.cpp
//  pictureBook04
//
//  Created by 引田祐樹 on 2018/12/20.
//

#include "woman.hpp"

woman::woman(){
    int num=30;
    woman::num=20;
    cout<<num<<endl;//30
    cout<<woman::num<<endl;//20
    cout<<::num<<endl;//10
}
