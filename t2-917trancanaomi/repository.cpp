//
// Created by Naomi on 5/3/2022.
//

#include "repository.h"

Repository::Repository()
{
    repo_iterator = NULL;
}
Repository:: ~Repository() {

        for (auto element : this->repo_dynamic_array)
        {
            delete element;
        }
        for (auto element : this->my_list)
        {
            delete element;
        }

}
void Repository::Create_Iterator()
{
    std::vector<HospitalDepartment*> new_copy_list;
    if (repo_iterator != NULL)
    {
        delete repo_iterator;
    }
    std::for_each(this->repo_dynamic_array.begin(), this->repo_dynamic_array.end(),[&new_copy_list](HospitalDepartment* element)
    {
        HospitalDepartment* copy_element = new  HospitalDepartment(element);
        new_copy_list.push_back(copy_element);

    });
    repo_iterator = new Iterator(new_copy_list);

}
void Repository::repository_add(HospitalDepartment* new_element_to_add)
{
    this->repo_dynamic_array.push_back(new_element_to_add);//we point to the object of the repo_dynamic_array(directly) and use the overloaded+= operator

}
