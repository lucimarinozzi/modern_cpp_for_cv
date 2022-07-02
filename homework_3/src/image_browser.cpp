#include  "homework_3.h"


namespace image_browser {
void AddFullRow(const ImageRow& row, bool first_row) {
    html_writer::OpenRow();
    html_writer::AddImage(std::get<0>(row[0]), std::get<1>(row[0]), first_row);
    html_writer::AddImage(std::get<0>(row[1]), std::get<1>(row[1]), false);
    html_writer::AddImage(std::get<0>(row[2]), std::get<1>(row[2]), false);
    html_writer::CloseRow();
}

void CreateImageBrowser(const std::string& title, const std::string& stylesheet,
                        const std::vector<ImageRow>& rows) {

    html_writer::OpenDocument();
    html_writer::CloseDocument();
    html_writer::AddTitle(title);
    html_writer::AddCSSStyle(stylesheet);
    html_writer::OpenBody();
    int i = 0;
    for (const auto &row: rows) {
        i++;
        if(i==1) {
            AddFullRow(row, true);
        } else {
            AddFullRow(row);
        }
    }
    html_writer::CloseBody();
    html_writer::CloseDocument();
}
        
} // namespace image_browser


