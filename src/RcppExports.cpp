// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// exp_mean
arma::mat exp_mean(const arma::vec& x, const arma::vec& p, const arma::vec& i, int ncol, int nrow, const arma::uvec& groups, const arma::uvec& group_sizes);
RcppExport SEXP _singlecellmethods_exp_mean(SEXP xSEXP, SEXP pSEXP, SEXP iSEXP, SEXP ncolSEXP, SEXP nrowSEXP, SEXP groupsSEXP, SEXP group_sizesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type group_sizes(group_sizesSEXP);
    rcpp_result_gen = Rcpp::wrap(exp_mean(x, p, i, ncol, nrow, groups, group_sizes));
    return rcpp_result_gen;
END_RCPP
}
// log_vmr
arma::mat log_vmr(const arma::vec& x, const arma::vec& p, const arma::vec& i, int ncol, int nrow, const arma::mat& means, const arma::uvec& groups, const arma::uvec& group_sizes);
RcppExport SEXP _singlecellmethods_log_vmr(SEXP xSEXP, SEXP pSEXP, SEXP iSEXP, SEXP ncolSEXP, SEXP nrowSEXP, SEXP meansSEXP, SEXP groupsSEXP, SEXP group_sizesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type means(meansSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type groups(groupsSEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type group_sizes(group_sizesSEXP);
    rcpp_result_gen = Rcpp::wrap(log_vmr(x, p, i, ncol, nrow, means, groups, group_sizes));
    return rcpp_result_gen;
END_RCPP
}
// normalizeCLR_dgc
arma::vec normalizeCLR_dgc(const arma::vec& x, const arma::vec& p, const arma::vec& i, int ncol, int nrow, int margin);
RcppExport SEXP _singlecellmethods_normalizeCLR_dgc(SEXP xSEXP, SEXP pSEXP, SEXP iSEXP, SEXP ncolSEXP, SEXP nrowSEXP, SEXP marginSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type x(xSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type p(pSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type i(iSEXP);
    Rcpp::traits::input_parameter< int >::type ncol(ncolSEXP);
    Rcpp::traits::input_parameter< int >::type nrow(nrowSEXP);
    Rcpp::traits::input_parameter< int >::type margin(marginSEXP);
    rcpp_result_gen = Rcpp::wrap(normalizeCLR_dgc(x, p, i, ncol, nrow, margin));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_singlecellmethods_exp_mean", (DL_FUNC) &_singlecellmethods_exp_mean, 7},
    {"_singlecellmethods_log_vmr", (DL_FUNC) &_singlecellmethods_log_vmr, 8},
    {"_singlecellmethods_normalizeCLR_dgc", (DL_FUNC) &_singlecellmethods_normalizeCLR_dgc, 6},
    {NULL, NULL, 0}
};

RcppExport void R_init_singlecellmethods(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
