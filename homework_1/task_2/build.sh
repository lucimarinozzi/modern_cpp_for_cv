#compile module
#c++ -c tools.cpp --> create tool.o
#organize modules into libraries
#ar rcs libtools.a tools.o <other_module>
#compile main application
#c++ -c main.cpp --> create main.o
#link main application to libraries
#c++ main.o -L . -ltools -o main 
#run
#./main

RESULTS_DIR=./results
BUILD_FOLDER=./build
LIB_DIR=$RESULTS_DIR/lib
MAIN_PATH=$BIN_DIR/main
LIBIPB_ARITHMETIC_PATH=$LIB_DIR/libipb_arithmetic.a

if [ -d $BUILD_FOLDER ]; then rm -r $BUILD_FOLDER; fi
if [ -d $MAIN_PATH ]; then rm $MAIN_PATH; fi
if [ -d $LIBIPB_ARITHMETIC_PATH ]; then rm $LIBIPB_ARITHMETIC_PATH; fi

mkdir -p $BUILD_FOLDER
c++ -c src/main.cpp -I ./include/  -o  $BUILD_FOLDER/main.o 
c++ -c src/subtract.cpp -I ./include/ -o $BUILD_FOLDER/subtract.o
c++ -c src/sum.cpp -I ./include/ -o $BUILD_FOLDER/sum.o 


ar rcs $LIBIPB_ARITHMETIC_PATH $BUILD_FOLDER/subtract.o $BUILD_FOLDER/sum.o

c++ $BUILD_FOLDER/main.o -L . $LIBIPB_ARITHMETIC_PATH -o main 

