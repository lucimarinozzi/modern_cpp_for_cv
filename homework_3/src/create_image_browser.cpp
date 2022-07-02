#include  "homework_3.h"
using image_browser::ImageRow;
using image_browser::ScoredImage;

int main(){
    ImageRow row0{
        ScoredImage("data/000000.png", 0.80),
        ScoredImage("data/000100.png", 0.85),
        ScoredImage("data/000200.png", 0.90)
        };

    ImageRow row1{
        ScoredImage("data/000300.png", 0.70),
        ScoredImage("data/000400.png", 0.75),
        ScoredImage("data/000500.png", 0.80)
        };

    std::vector<ImageRow> rows{row0, row1};
    image_browser::CreateImageBrowser("Image Browser", "style.css", rows);
}