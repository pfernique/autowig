#include <boost/python.hpp>
#include <clang/AST/DeclTemplate.h>

void export_class_clang_class_template_specialization_decl()
{
    std::string clang_7bbff48d_1098_53e8_8270_b3595c663a99_name = boost::python::extract< std::string >(boost::python::scope().attr("__name__") + ".clang");
    boost::python::object clang_7bbff48d_1098_53e8_8270_b3595c663a99_module(boost::python::handle<  >(boost::python::borrowed(PyImport_AddModule(clang_7bbff48d_1098_53e8_8270_b3595c663a99_name.c_str()))));
    boost::python::scope().attr("clang") = clang_7bbff48d_1098_53e8_8270_b3595c663a99_module;
    boost::python::scope clang_7bbff48d_1098_53e8_8270_b3595c663a99_scope = clang_7bbff48d_1098_53e8_8270_b3595c663a99_module;
    boost::python::class_< ::clang::ClassTemplateSpecializationDecl, ::clang::ClassTemplateSpecializationDecl *, boost::python::bases< ::clang::CXXRecordDecl, ::llvm::FoldingSetNode >, boost::noncopyable >("ClassTemplateSpecializationDecl", boost::python::no_init)
        .def("get_template_args", &::clang::ClassTemplateSpecializationDecl::getTemplateArgs, boost::python::return_value_policy< boost::python::reference_existing_object >());
}