#include "IConvertImage.h"
#include "IPO.h"

int main() {
    std::string imageName = "test.jpg";
    std::string toFormat = "png";
    IConvertImage *pTest = CreateObject(imageName, toFormat);
    IPO *pIPO;

    if (pTest != nullptr) {
        pTest->convert();

        pIPO = dynamic_cast<IPO *>(pTest->Dynamic("IPO"));

        if (pIPO != nullptr) {
            pIPO->Save();
            pIPO->DestroyPointer();
        }
        pTest->DestroyPointer();
    }
    return 0;
}