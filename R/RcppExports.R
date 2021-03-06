# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

caisa_acc <- function(X, w, sa2, pi, beta, r, sigma2, maxiter, miniter, mixsqpiter, convtol, epstol, updatesigma, verbose) {
    .Call('_mr_ash_alpha_caisa_acc', PACKAGE = 'mr.ash.alpha', X, w, sa2, pi, beta, r, sigma2, maxiter, miniter, mixsqpiter, convtol, epstol, updatesigma, verbose)
}

caisa_em <- function(X, w, sa2, pi, beta, r, sigma2, maxiter, miniter, convtol, epstol, updatesigma, verbose) {
    .Call('_mr_ash_alpha_caisa_em', PACKAGE = 'mr.ash.alpha', X, w, sa2, pi, beta, r, sigma2, maxiter, miniter, convtol, epstol, updatesigma, verbose)
}

caisa_em2 <- function(y, X, w, sa2, pi, beta, r, sigma2, maxiter, miniter, convtol, epstol, updatesigma, verbose) {
    .Call('_mr_ash_alpha_caisa_em2', PACKAGE = 'mr.ash.alpha', y, X, w, sa2, pi, beta, r, sigma2, maxiter, miniter, convtol, epstol, updatesigma, verbose)
}

caisa_em3 <- function(X, w, sa2, pi, beta, r, sigma2, maxiter, miniter, convtol, epstol, updatesigma, verbose) {
    .Call('_mr_ash_alpha_caisa_em3', PACKAGE = 'mr.ash.alpha', X, w, sa2, pi, beta, r, sigma2, maxiter, miniter, convtol, epstol, updatesigma, verbose)
}

caisa_fix_pi <- function(X, w, sa2, pi, beta, r, sigma2, maxiter, miniter, convtol, epstol, updatesigma, verbose) {
    .Call('_mr_ash_alpha_caisa_fix_pi', PACKAGE = 'mr.ash.alpha', X, w, sa2, pi, beta, r, sigma2, maxiter, miniter, convtol, epstol, updatesigma, verbose)
}

caisa_g <- function(X, w, sa2, phi, pi, beta, r, sigma2, maxiter, miniter, convtol, epstol, stepsize, updatesigma, mode, verbose) {
    .Call('_mr_ash_alpha_caisa_g', PACKAGE = 'mr.ash.alpha', X, w, sa2, phi, pi, beta, r, sigma2, maxiter, miniter, convtol, epstol, stepsize, updatesigma, mode, verbose)
}

random_order <- function(p, numiter) {
    .Call('_mr_ash_alpha_random_order', PACKAGE = 'mr.ash.alpha', p, numiter)
}

caisa_order <- function(X, w, sa2, pi, beta, r, sigma2, o, maxiter, miniter, convtol, epstol, updatesigma, verbose) {
    .Call('_mr_ash_alpha_caisa_order', PACKAGE = 'mr.ash.alpha', X, w, sa2, pi, beta, r, sigma2, o, maxiter, miniter, convtol, epstol, updatesigma, verbose)
}

caisa_sigma2 <- function(X, w, sa2, pi, beta, r, sigma2, maxiter, miniter, convtol, epstol, updatesigma, verbose) {
    .Call('_mr_ash_alpha_caisa_sigma2', PACKAGE = 'mr.ash.alpha', X, w, sa2, pi, beta, r, sigma2, maxiter, miniter, convtol, epstol, updatesigma, verbose)
}

gibbs_sampling <- function(X, w, sa2, pi, beta, r, sigma2, maxiter, burnin, verbose) {
    .Call('_mr_ash_alpha_gibbs_sampling', PACKAGE = 'mr.ash.alpha', X, w, sa2, pi, beta, r, sigma2, maxiter, burnin, verbose)
}

