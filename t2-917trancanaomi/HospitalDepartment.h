//
// Created by Naomi on 5/3/2022.
//

#ifndef T2_917TRANCANAOMI_1_HOSPITALDEPARTMENT_H
#define T2_917TRANCANAOMI_1_HOSPITALDEPARTMENT_H
#include <string>
using namespace std;
class HospitalDepartment{
public:
    HospitalDepartment(string new_hospitalName, int new_nrofDoctors);
    HospitalDepartment(HospitalDepartment* element_to_copy);
    string get_name();
    int get_nrofDoctors();
    bool get_isEffcient();


private:
    string hospitalName;
    int nrofDoctors;
    bool isEfficient;
    string toString;


};

#endif //T2_917TRANCANAOMI_1_HOSPITALDEPARTMENT_H
