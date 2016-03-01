// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// solve_gurobi
Rcpp::List solve_gurobi(Rcpp::List model, std::vector<std::string> param_names, std::vector<std::string> param_vals, std::size_t NumberSolutions, bool verbose);
RcppExport SEXP rgurobi_solve_gurobi(SEXP modelSEXP, SEXP param_namesSEXP, SEXP param_valsSEXP, SEXP NumberSolutionsSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::List >::type model(modelSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type param_names(param_namesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type param_vals(param_valsSEXP);
    Rcpp::traits::input_parameter< std::size_t >::type NumberSolutions(NumberSolutionsSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(solve_gurobi(model, param_names, param_vals, NumberSolutions, verbose));
    return __result;
END_RCPP
}