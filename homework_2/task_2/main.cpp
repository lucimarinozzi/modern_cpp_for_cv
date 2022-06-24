#include <iostream>
#include <cstdlib>
#include <sstream>


int main(int argc, char const *argv[]) {
    if (argc != 3) {
        std::cout << "Expected 2 args, but " << argc - 1 << " were given!\n" << "Aborting..." <<std::endl;
        return EXIT_FAILURE;
    }

    std::stringstream input1{argv[1]}, input2{argv[2]};

    int num1, num2;
    std::string ext1, ext2;

    input1 >> num1 >> ext1;
    input2 >> num2 >> ext2;

    if (ext1 == ".txt" and ext2 == ".txt") {
        std::cout << (num1+num2)/2 << std::endl;
    } else if (ext1 == ".png" and ext2 == ".png") {
        std::cout << num1+num2 << std::endl;
    } else if (ext1 == ".txt" and ext2 == ".png") {
        std::cout << num1 % num2 << std::endl;
    } else {
        std::cerr << "Expected [.txt, .txt], [.png, .png] or [.txt, .png], got [" << 
        ext1 << "," << ext2 <<  "]\n" << "Aborting..." <<std::endl;
        return EXIT_FAILURE;
    }
    return EXIT_SUCCESS;
}