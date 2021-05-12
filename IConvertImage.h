//
// Created by ayamir on 4/15/21.
//

#ifndef CONVERTIMAGE_ICONVERTIMAGE_H
#define CONVERTIMAGE_ICONVERTIMAGE_H

#include <iostream>
#include "IEO.h"

class IConvertImage : public IEO {
public:
    IConvertImage();

    virtual ~IConvertImage();

    virtual void convert() = 0;

    virtual void convertTo(const std::string &) = 0;

    virtual void describe() = 0;

};

extern "C" IConvertImage *CreateObject(std::string imageName, std::string toFormat);

#endif //CONVERTIMAGE_ICONVERTIMAGE_H
