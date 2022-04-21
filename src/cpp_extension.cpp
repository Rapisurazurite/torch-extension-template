//
// Created by ubuntu on 22-4-21.
//

#include "cpp_extension.h"

void init_module_cpp_extension(pybind11::module &m) {
    m.def("is_cpp_extension_init", [](){
        return true;
    });
}