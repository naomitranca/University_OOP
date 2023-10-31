
//
// Created by Naomi on 5/3/2022.
//

#include "HospitalDepartment.h"
HospitalDepartment:: HospitalDepartment (string new_hospitalName, int new_nrofDoctors)
{
    this -> hospitalName = new_hospitalName;
    this -> nrofDoctors = new_nrofDoctors;

}
HospitalDepartment::HospitalDepartment(HospitalDepartment* element_to_copy)
{
    this -> hospitalName = element_to_copy->get_name();
    this -> nrofDoctors = element_to_copy->get_nrofDoctors();

}
string HospitalDepartment:: get_name()
{
    return this->hospitalName;
}
int HospitalDepartment:: get_nrofDoctors()
{
    return this->nrofDoctors;
}
bool HospitalDepartment::get_isEffcient() {
    return this-> isEfficient;
}
