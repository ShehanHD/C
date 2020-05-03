//
// Created by Sheha on 05/12/2019.
//

#ifndef ANALYTICS_INDEX_IOFILE_H
#define ANALYTICS_INDEX_IOFILE_H

#include "../AnalyticsIndex/AnalyticsIndex.h"

class IOFile {
private:
    std::string toUPPER(std::string);
    std::string filterSTR(std::string);
    bool exists(const char *);
    void PDFtoTXT(char *);


public:
    void setPDF(char *);
    void setTXT(char *);
};


#endif //ANALYTICS_INDEX_IOFILE_H
