// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// extractGT2NM
NumericMatrix extractGT2NM(DataFrame x, std::string element = "DP");
RcppExport SEXP vcfR_extractGT2NM(SEXP xSEXP, SEXP elementSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< std::string >::type element(elementSEXP );
        NumericMatrix __result = extractGT2NM(x, element);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// extract_GT_to_DF
DataFrame extract_GT_to_DF(DataFrame x, std::string element = "DP");
RcppExport SEXP vcfR_extract_GT_to_DF(SEXP xSEXP, SEXP elementSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< DataFrame >::type x(xSEXP );
        Rcpp::traits::input_parameter< std::string >::type element(elementSEXP );
        DataFrame __result = extract_GT_to_DF(x, element);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// NM2winNM
NumericMatrix NM2winNM(NumericMatrix x, std::vector<int> pos, int maxbp, int winsize = 100);
RcppExport SEXP vcfR_NM2winNM(SEXP xSEXP, SEXP posSEXP, SEXP maxbpSEXP, SEXP winsizeSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< NumericMatrix >::type x(xSEXP );
        Rcpp::traits::input_parameter< std::vector<int> >::type pos(posSEXP );
        Rcpp::traits::input_parameter< int >::type maxbp(maxbpSEXP );
        Rcpp::traits::input_parameter< int >::type winsize(winsizeSEXP );
        NumericMatrix __result = NM2winNM(x, pos, maxbp, winsize);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// readVcfHeader
std::vector<std::string> readVcfHeader(String x);
RcppExport SEXP vcfR_readVcfHeader(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< String >::type x(xSEXP );
        std::vector<std::string> __result = readVcfHeader(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// readVcfBody
CharacterMatrix readVcfBody(String x);
RcppExport SEXP vcfR_readVcfBody(SEXP xSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< String >::type x(xSEXP );
        CharacterMatrix __result = readVcfBody(x);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
