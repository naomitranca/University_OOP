//
// Created by Naomi on 5/3/2022.
//

#ifndef T2_917TRANCANAOMI_1_SERVICE_H
#define T2_917TRANCANAOMI_1_SERVICE_H
#include <string>
#include "HospitalDepartment.h"
class Service{
public:
    Service();
    ~Service();
    void addDepartment(string hospitalName, int nrofDoctors);
    void getAllDepartments();
    void getAllEfficientDepartment();

};
#endif //T2_917TRANCANAOMI_1_SERVICE_H
