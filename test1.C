
#include <iostream>
#include "common.C"

namespace MyTest{
  void test_1(){
    int i =0;
    std::cout<<"DEBUG: "<<__FILE__<<"("<<__LINE__<<")\t\t"<<i<<"\tside = "<<s_side<<std::endl;
    JustP();
  }
};

//#include "test2.C"
