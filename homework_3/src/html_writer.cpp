#include  "homework_3.h"
#include <iostream>
#include <filesystem>

namespace html_writer{
    void OpenDocument() {
        std::cout << "<!DOCTYPE html>" << std::endl;
        std::cout << "<html>" << std::endl;
    }

    void CloseDocument() {
        std::cout << "</html>" << std::endl;
    }

    void AddCSSStyle(const std::string& stylesheet) {
        std::cout << "  <head>" << std::endl;
        std::cout << R"(    <link rel="stylesheet" type="text/css" href=")" << stylesheet 
            << R"(" />)" << std::endl;
        std::cout << "</head>" << std::endl;
    }

    void AddTitle(const std::string& title) {
        std::cout << "  <title>" << title << "</title>" << std::endl;

    }
        
    void OpenBody() {
        std::cout << "  <body>" << std::endl;
    }

    void CloseBody() {
        std::cout << "  </body>" << std::endl;
    }

    void OpenRow() {
        std::cout << R"(    <div class="row">)"  << std::endl;
    }

    void CloseRow() {
        std::cout << "    </div>" << std::endl;
    }

    void AddImage(const std::string& img_path, float score, bool highlight){
        const std::filesystem::path path = std::filesystem::path(img_path);
        const std::string extension = path.extension();
        const std::string filename = path.filename();

        if (extension.compare(".png") != 0 and extension.compare(".jpeg") != 0)  {
            std::cerr << "[ERROR] : Unsupported image format\n";
        }

        std::string res = (highlight) ? 
            R"(      <div class="column" style="border: 5px solid green;">)" : R"(      <div class="column">)";
        std::cout << res << std::endl;

        std::cout << "        <h2>"  << filename << "</h2>" << std::endl;
        std::cout << "        <img src="  << img_path << " />" << std::endl;
        std::cout << "        <p>score = " << std::setprecision(2) << std::fixed << score 
            << "</p>" << std::endl;
        std::cout << "    </div>" << std::endl;

}
}
