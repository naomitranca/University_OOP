//
// Created by Naomi on 5/3/2022.
//

#ifndef T2_917TRANCANAOMI_1_REPOSITORY_H
#define T2_917TRANCANAOMI_1_REPOSITORY_H
#include "HospitalDepartment.h"
#include <vector>
using namespace std;
class Repository{
public:
    Repository();
    ~Repository();
    void Create_Iterator() override;
    void repository_add(HospitalDepartment* new_element_to_add);


private:

    std::vector<HospitalDepartment*>repo_dynamic_array;
    Iterator* repo_iterator;
    std::vector<HospitalDepartment*> my_list;
};

#endif //T2_917TRANCANAOMI_1_REPOSITORY_H
