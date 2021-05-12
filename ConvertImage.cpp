#include "ConvertImage.h"
#include <iostream>

ConvertImage::ConvertImage(std::string imageName, std::string toFormat) {
    this->imageName = imageName;
    checkFromFormat();
    this->toFormat = toFormat;
}

ConvertImage::~ConvertImage() {
    std::cout << "\ndeleted!" << std::endl;
}


void ConvertImage::convert() {
    std::cout << "\nconvert finished!" << std::endl;
}

void ConvertImage::convertTo(const std::string &format) {
    std::cout << "\nconvert to " << format << " finished!" << std::endl;
}

void ConvertImage::checkFromFormat() {
    if (!imageName.empty()) {
        size_t pos = imageName.find('.', 0);
        if (pos != std::string::npos) {
            fromFormat = imageName.substr(pos + 1);
        } else {
            std::cout << "Please check your original image name is correct!" << std::endl;
        }
    }
}

void ConvertImage::describe() {
    if (!imageName.empty() && !fromFormat.empty() && !toFormat.empty()) {
        std::cout << "This object's " << std::endl;
        std::cout << "imageName = " << imageName << std::endl;
        std::cout << "fromFormat = " << fromFormat << std::endl;
        std::cout << "toFormat = " << toFormat << std::endl;
    }
}

void ConvertImage::DestroyPointer() {
    ptrNum--;
    if (ptrNum == 0) {
        delete this;
    }
}

void ConvertImage::CopyPointer() {
    ptrNum++;
}

void ConvertImage::Save() {
    std::cout << "This image is saved!" << std::endl;
}

IEO *ConvertImage::Dynamic(const std::string &name) {
    IEO *pv;
    if (name == "IConvertImage") {
        pv = static_cast<IConvertImage *>(this);
    } else if (name == "IPO") {
        pv = static_cast<IPO *>(this);
    } else if (name == "IEO") {
        pv = static_cast<IConvertImage *>(this);
    } else {
        return nullptr;
    }
    pv->CopyPointer();
    return pv;
}

IConvertImage *CreateObject(std::string imageName, std::string toFormat) {
    IConvertImage *pCI = new ConvertImage(imageName, toFormat);
    if (pCI != nullptr) {
        pCI->CopyPointer();
    }
    return pCI;
}