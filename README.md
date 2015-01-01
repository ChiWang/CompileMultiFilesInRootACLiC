
test*.C

    *   many functions in different files: test*.C

FileList.h

    *   includes all test*.C

Run.C

    *   only include FileList.h, and only compile FileList.h by using gSystem->CompileMacro("filename","k");

THEN:

    all functoinalities in test*.C will be compiled into a single shared library.



NOTE:

    gSystem->CompileMacro():  one file <---> one library!


Summray:

    0.  all your funtions

    1.  List all of them in an other header file.

    2.  compile the header file
