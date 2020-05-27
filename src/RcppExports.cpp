// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// Matprod
SEXP Matprod(Eigen::MatrixXd A, Eigen::MatrixXd B);
RcppExport SEXP _GCA_Matprod(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(Matprod(A, B));
    return rcpp_result_gen;
END_RCPP
}
// Matprodt
SEXP Matprodt(Eigen::MatrixXd A, Eigen::MatrixXd B);
RcppExport SEXP _GCA_Matprodt(SEXP ASEXP, SEXP BSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type A(ASEXP);
    Rcpp::traits::input_parameter< Eigen::MatrixXd >::type B(BSEXP);
    rcpp_result_gen = Rcpp::wrap(Matprodt(A, B));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_GCA_Matprod", (DL_FUNC) &_GCA_Matprod, 2},
    {"_GCA_Matprodt", (DL_FUNC) &_GCA_Matprodt, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_GCA(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
