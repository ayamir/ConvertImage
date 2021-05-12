//
// Created by ayamir on 4/25/21.
//

#ifndef CONVERTIMAGE_IEO_H
#define CONVERTIMAGE_IEO_H

#include <string>

class IEO {
public:
    virtual IEO* Dynamic(const std::string& name) = 0;
    virtual void CopyPointer() = 0;
    virtual void DestroyPointer() = 0;
};

#endif //CONVERTIMAGE_IEO_H
