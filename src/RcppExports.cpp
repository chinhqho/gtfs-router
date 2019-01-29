// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// rcpp_get_sp_dists
Rcpp::NumericMatrix rcpp_get_sp_dists(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::IntegerVector toi);
RcppExport SEXP _gtfsrouter_rcpp_get_sp_dists(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP toiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type toi(toiSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_sp_dists(graph, vert_map_in, fromi, toi));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_get_paths
Rcpp::List rcpp_get_paths(const Rcpp::DataFrame graph, const Rcpp::DataFrame vert_map_in, Rcpp::IntegerVector fromi, Rcpp::IntegerVector toi);
RcppExport SEXP _gtfsrouter_rcpp_get_paths(SEXP graphSEXP, SEXP vert_map_inSEXP, SEXP fromiSEXP, SEXP toiSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type graph(graphSEXP);
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type vert_map_in(vert_map_inSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type fromi(fromiSEXP);
    Rcpp::traits::input_parameter< Rcpp::IntegerVector >::type toi(toiSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_get_paths(graph, vert_map_in, fromi, toi));
    return rcpp_result_gen;
END_RCPP
}
// rcpp_transfer_times
Rcpp::List rcpp_transfer_times(const Rcpp::DataFrame stop_times);
RcppExport SEXP _gtfsrouter_rcpp_transfer_times(SEXP stop_timesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const Rcpp::DataFrame >::type stop_times(stop_timesSEXP);
    rcpp_result_gen = Rcpp::wrap(rcpp_transfer_times(stop_times));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_gtfsrouter_rcpp_get_sp_dists", (DL_FUNC) &_gtfsrouter_rcpp_get_sp_dists, 4},
    {"_gtfsrouter_rcpp_get_paths", (DL_FUNC) &_gtfsrouter_rcpp_get_paths, 4},
    {"_gtfsrouter_rcpp_transfer_times", (DL_FUNC) &_gtfsrouter_rcpp_transfer_times, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_gtfsrouter(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}