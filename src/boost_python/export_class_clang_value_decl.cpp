#include <boost/python.hpp>
#include <clang/AST/Decl.h>
#include <clang/AST/Type.h>

void export_class_clang_value_decl()
{
    std::string clang_7bbff48d_1098_53e8_8270_b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object clang_7bbff48d_1098_53e8_8270_b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d_1098_53e8_8270_b3595c663a99_name.c_str()))));
    boost::python::scope().attr("clang") = clang_7bbff48d_1098_53e8_8270_b3595c663a99_module;
    boost::python::scope clang_7bbff48d_1098_53e8_8270_b3595c663a99_scope = clang_7bbff48d_1098_53e8_8270_b3595c663a99_module;
    boost::python::class_< ::clang::ValueDecl, ::clang::ValueDecl *, boost::python::bases< ::clang::NamedDecl >, boost::noncopyable >("ValueDecl", boost::python::no_init)
        .def("get_type", &::clang::ValueDecl::getType);
}