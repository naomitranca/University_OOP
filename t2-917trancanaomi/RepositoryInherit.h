//
// Created by Naomi on 5/3/2022.
//

#ifndef T2_917TRANCANAOMI_1_REPOSITORYINHERIT_H
#define T2_917TRANCANAOMI_1_REPOSITORYINHERIT_H

#include "HospitalDepartment.h"
class Repository_Inherit {
public:
    virtual ~Repository_Inherit() = 0 {};

    virtual void Create_Iterator() = 0;
    virtual void repository_add(HospitalDepartment* new_element_to_add)=0;
    virtual void repository_delete(string hospitalName)=0;
private:

}
#endif //T2_917TRANCANAOMI_1_REPOSITORYINHERIT_H
