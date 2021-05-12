#ifndef CONVERTIMAGE_LIBRARY_H
#define CONVERTIMAGE_LIBRARY_H

#include <string>
#include "IConvertImage.h"
#include "IPO.h"

class ConvertImage : public IConvertImage, public IPO{
private:
    int ptrNum;
    std::string imageName;
    std::string fromFormat;
    std::string toFormat;

public:

    ConvertImage(std::string imageName, std::string toFormat);

    ~ConvertImage() override;

    void describe() override;

    void convert() override;

    void convertTo(const std::string& ) override;

    void CopyPointer() override;

    void DestroyPointer() override;

    void Save() override;

    IEO* Dynamic(const std::string& name) override;

    void checkFromFormat();
};

#endif //CONVERTIMAGE_LIBRARY_H
