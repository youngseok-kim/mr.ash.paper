// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// caisa_acc
List caisa_acc(const arma::mat& X, const arma::vec& w, const arma::vec& sa2, arma::vec& pi, arma::vec& beta, arma::vec& r, double sigma2, int maxiter, int miniter, int mixsqpiter, double convtol, double epstol, bool updatesigma, bool verbose);
RcppExport SEXP _mr_ash_alpha_caisa_acc(SEXP XSEXP, SEXP wSEXP, SEXP sa2SEXP, SEXP piSEXP, SEXP betaSEXP, SEXP rSEXP, SEXP sigma2SEXP, SEXP maxiterSEXP, SEXP miniterSEXP, SEXP mixsqpiterSEXP, SEXP convtolSEXP, SEXP epstolSEXP, SEXP updatesigmaSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sa2(sa2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type pi(piSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< int >::type miniter(miniterSEXP);
    Rcpp::traits::input_parameter< int >::type mixsqpiter(mixsqpiterSEXP);
    Rcpp::traits::input_parameter< double >::type convtol(convtolSEXP);
    Rcpp::traits::input_parameter< double >::type epstol(epstolSEXP);
    Rcpp::traits::input_parameter< bool >::type updatesigma(updatesigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(caisa_acc(X, w, sa2, pi, beta, r, sigma2, maxiter, miniter, mixsqpiter, convtol, epstol, updatesigma, verbose));
    return rcpp_result_gen;
END_RCPP
}
// caisa_em
List caisa_em(const arma::mat& X, const arma::vec& w, const arma::vec& sa2, arma::vec& pi, arma::vec& beta, arma::vec& r, double sigma2, int maxiter, int miniter, double convtol, double epstol, bool updatesigma, bool verbose);
RcppExport SEXP _mr_ash_alpha_caisa_em(SEXP XSEXP, SEXP wSEXP, SEXP sa2SEXP, SEXP piSEXP, SEXP betaSEXP, SEXP rSEXP, SEXP sigma2SEXP, SEXP maxiterSEXP, SEXP miniterSEXP, SEXP convtolSEXP, SEXP epstolSEXP, SEXP updatesigmaSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sa2(sa2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type pi(piSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< int >::type miniter(miniterSEXP);
    Rcpp::traits::input_parameter< double >::type convtol(convtolSEXP);
    Rcpp::traits::input_parameter< double >::type epstol(epstolSEXP);
    Rcpp::traits::input_parameter< bool >::type updatesigma(updatesigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(caisa_em(X, w, sa2, pi, beta, r, sigma2, maxiter, miniter, convtol, epstol, updatesigma, verbose));
    return rcpp_result_gen;
END_RCPP
}
// caisa_em2
List caisa_em2(const arma::vec& y, const arma::mat& X, const arma::vec& w, const arma::vec& sa2, arma::vec& pi, arma::vec& beta, arma::vec& r, double sigma2, int maxiter, int miniter, double convtol, double epstol, bool updatesigma, bool verbose);
RcppExport SEXP _mr_ash_alpha_caisa_em2(SEXP ySEXP, SEXP XSEXP, SEXP wSEXP, SEXP sa2SEXP, SEXP piSEXP, SEXP betaSEXP, SEXP rSEXP, SEXP sigma2SEXP, SEXP maxiterSEXP, SEXP miniterSEXP, SEXP convtolSEXP, SEXP epstolSEXP, SEXP updatesigmaSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sa2(sa2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type pi(piSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< int >::type miniter(miniterSEXP);
    Rcpp::traits::input_parameter< double >::type convtol(convtolSEXP);
    Rcpp::traits::input_parameter< double >::type epstol(epstolSEXP);
    Rcpp::traits::input_parameter< bool >::type updatesigma(updatesigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(caisa_em2(y, X, w, sa2, pi, beta, r, sigma2, maxiter, miniter, convtol, epstol, updatesigma, verbose));
    return rcpp_result_gen;
END_RCPP
}
// caisa_em3
List caisa_em3(const arma::mat& X, const arma::vec& w, const arma::vec& sa2, arma::vec& pi, arma::vec& beta, arma::vec& r, double sigma2, int maxiter, int miniter, double convtol, double epstol, bool updatesigma, bool verbose);
RcppExport SEXP _mr_ash_alpha_caisa_em3(SEXP XSEXP, SEXP wSEXP, SEXP sa2SEXP, SEXP piSEXP, SEXP betaSEXP, SEXP rSEXP, SEXP sigma2SEXP, SEXP maxiterSEXP, SEXP miniterSEXP, SEXP convtolSEXP, SEXP epstolSEXP, SEXP updatesigmaSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sa2(sa2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type pi(piSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< int >::type miniter(miniterSEXP);
    Rcpp::traits::input_parameter< double >::type convtol(convtolSEXP);
    Rcpp::traits::input_parameter< double >::type epstol(epstolSEXP);
    Rcpp::traits::input_parameter< bool >::type updatesigma(updatesigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(caisa_em3(X, w, sa2, pi, beta, r, sigma2, maxiter, miniter, convtol, epstol, updatesigma, verbose));
    return rcpp_result_gen;
END_RCPP
}
// caisa_fix_pi
List caisa_fix_pi(const arma::mat& X, const arma::vec& w, const arma::vec& sa2, arma::vec& pi, arma::vec& beta, arma::vec& r, double sigma2, int maxiter, int miniter, double convtol, double epstol, bool updatesigma, bool verbose);
RcppExport SEXP _mr_ash_alpha_caisa_fix_pi(SEXP XSEXP, SEXP wSEXP, SEXP sa2SEXP, SEXP piSEXP, SEXP betaSEXP, SEXP rSEXP, SEXP sigma2SEXP, SEXP maxiterSEXP, SEXP miniterSEXP, SEXP convtolSEXP, SEXP epstolSEXP, SEXP updatesigmaSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sa2(sa2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type pi(piSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< int >::type miniter(miniterSEXP);
    Rcpp::traits::input_parameter< double >::type convtol(convtolSEXP);
    Rcpp::traits::input_parameter< double >::type epstol(epstolSEXP);
    Rcpp::traits::input_parameter< bool >::type updatesigma(updatesigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(caisa_fix_pi(X, w, sa2, pi, beta, r, sigma2, maxiter, miniter, convtol, epstol, updatesigma, verbose));
    return rcpp_result_gen;
END_RCPP
}
// caisa_g
List caisa_g(const arma::mat& X, const arma::vec& w, const arma::vec& sa2, arma::mat& phi, arma::vec& pi, arma::vec& beta, arma::vec& r, double sigma2, int maxiter, int miniter, double convtol, double epstol, double stepsize, bool updatesigma, bool mode, bool verbose);
RcppExport SEXP _mr_ash_alpha_caisa_g(SEXP XSEXP, SEXP wSEXP, SEXP sa2SEXP, SEXP phiSEXP, SEXP piSEXP, SEXP betaSEXP, SEXP rSEXP, SEXP sigma2SEXP, SEXP maxiterSEXP, SEXP miniterSEXP, SEXP convtolSEXP, SEXP epstolSEXP, SEXP stepsizeSEXP, SEXP updatesigmaSEXP, SEXP modeSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sa2(sa2SEXP);
    Rcpp::traits::input_parameter< arma::mat& >::type phi(phiSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type pi(piSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< int >::type miniter(miniterSEXP);
    Rcpp::traits::input_parameter< double >::type convtol(convtolSEXP);
    Rcpp::traits::input_parameter< double >::type epstol(epstolSEXP);
    Rcpp::traits::input_parameter< double >::type stepsize(stepsizeSEXP);
    Rcpp::traits::input_parameter< bool >::type updatesigma(updatesigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type mode(modeSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(caisa_g(X, w, sa2, phi, pi, beta, r, sigma2, maxiter, miniter, convtol, epstol, stepsize, updatesigma, mode, verbose));
    return rcpp_result_gen;
END_RCPP
}
// random_order
arma::uvec random_order(int p, int numiter);
RcppExport SEXP _mr_ash_alpha_random_order(SEXP pSEXP, SEXP numiterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type p(pSEXP);
    Rcpp::traits::input_parameter< int >::type numiter(numiterSEXP);
    rcpp_result_gen = Rcpp::wrap(random_order(p, numiter));
    return rcpp_result_gen;
END_RCPP
}
// caisa_order
List caisa_order(const arma::mat& X, const arma::vec& w, const arma::vec& sa2, arma::vec& pi, arma::vec& beta, arma::vec& r, double sigma2, const arma::uvec& o, int maxiter, int miniter, double convtol, double epstol, bool updatesigma, bool verbose);
RcppExport SEXP _mr_ash_alpha_caisa_order(SEXP XSEXP, SEXP wSEXP, SEXP sa2SEXP, SEXP piSEXP, SEXP betaSEXP, SEXP rSEXP, SEXP sigma2SEXP, SEXP oSEXP, SEXP maxiterSEXP, SEXP miniterSEXP, SEXP convtolSEXP, SEXP epstolSEXP, SEXP updatesigmaSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sa2(sa2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type pi(piSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< const arma::uvec& >::type o(oSEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< int >::type miniter(miniterSEXP);
    Rcpp::traits::input_parameter< double >::type convtol(convtolSEXP);
    Rcpp::traits::input_parameter< double >::type epstol(epstolSEXP);
    Rcpp::traits::input_parameter< bool >::type updatesigma(updatesigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(caisa_order(X, w, sa2, pi, beta, r, sigma2, o, maxiter, miniter, convtol, epstol, updatesigma, verbose));
    return rcpp_result_gen;
END_RCPP
}
// caisa_sigma2
List caisa_sigma2(const arma::mat& X, const arma::vec& w, const arma::vec& sa2, arma::vec& pi, arma::vec& beta, arma::vec& r, double sigma2, int maxiter, int miniter, double convtol, double epstol, bool updatesigma, bool verbose);
RcppExport SEXP _mr_ash_alpha_caisa_sigma2(SEXP XSEXP, SEXP wSEXP, SEXP sa2SEXP, SEXP piSEXP, SEXP betaSEXP, SEXP rSEXP, SEXP sigma2SEXP, SEXP maxiterSEXP, SEXP miniterSEXP, SEXP convtolSEXP, SEXP epstolSEXP, SEXP updatesigmaSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sa2(sa2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type pi(piSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< int >::type miniter(miniterSEXP);
    Rcpp::traits::input_parameter< double >::type convtol(convtolSEXP);
    Rcpp::traits::input_parameter< double >::type epstol(epstolSEXP);
    Rcpp::traits::input_parameter< bool >::type updatesigma(updatesigmaSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(caisa_sigma2(X, w, sa2, pi, beta, r, sigma2, maxiter, miniter, convtol, epstol, updatesigma, verbose));
    return rcpp_result_gen;
END_RCPP
}
// gibbs_sampling
List gibbs_sampling(const arma::mat& X, const arma::vec& w, const arma::vec& sa2, arma::vec& pi, arma::vec& beta, arma::vec& r, double sigma2, int maxiter, int burnin, bool verbose);
RcppExport SEXP _mr_ash_alpha_gibbs_sampling(SEXP XSEXP, SEXP wSEXP, SEXP sa2SEXP, SEXP piSEXP, SEXP betaSEXP, SEXP rSEXP, SEXP sigma2SEXP, SEXP maxiterSEXP, SEXP burninSEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type w(wSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type sa2(sa2SEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type pi(piSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< arma::vec& >::type r(rSEXP);
    Rcpp::traits::input_parameter< double >::type sigma2(sigma2SEXP);
    Rcpp::traits::input_parameter< int >::type maxiter(maxiterSEXP);
    Rcpp::traits::input_parameter< int >::type burnin(burninSEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    rcpp_result_gen = Rcpp::wrap(gibbs_sampling(X, w, sa2, pi, beta, r, sigma2, maxiter, burnin, verbose));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_mr_ash_alpha_caisa_acc", (DL_FUNC) &_mr_ash_alpha_caisa_acc, 14},
    {"_mr_ash_alpha_caisa_em", (DL_FUNC) &_mr_ash_alpha_caisa_em, 13},
    {"_mr_ash_alpha_caisa_em2", (DL_FUNC) &_mr_ash_alpha_caisa_em2, 14},
    {"_mr_ash_alpha_caisa_em3", (DL_FUNC) &_mr_ash_alpha_caisa_em3, 13},
    {"_mr_ash_alpha_caisa_fix_pi", (DL_FUNC) &_mr_ash_alpha_caisa_fix_pi, 13},
    {"_mr_ash_alpha_caisa_g", (DL_FUNC) &_mr_ash_alpha_caisa_g, 16},
    {"_mr_ash_alpha_random_order", (DL_FUNC) &_mr_ash_alpha_random_order, 2},
    {"_mr_ash_alpha_caisa_order", (DL_FUNC) &_mr_ash_alpha_caisa_order, 14},
    {"_mr_ash_alpha_caisa_sigma2", (DL_FUNC) &_mr_ash_alpha_caisa_sigma2, 13},
    {"_mr_ash_alpha_gibbs_sampling", (DL_FUNC) &_mr_ash_alpha_gibbs_sampling, 10},
    {NULL, NULL, 0}
};

RcppExport void R_init_mr_ash_alpha(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
