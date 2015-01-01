
#include "FileList.h"

void Run(){
  FileStat_t x;
  TString libName  = "libMyTest";
  if(gSystem->GetPathInfo(libName,x)){
    gSystem->CompileMacro("./FileList.h","k",libName);
  }else{
    gSystem->Load(libName);
  }
}

void MyPrint(int x=5){
  MyTest::test_1();
  MyTest::test_2(x);
}

