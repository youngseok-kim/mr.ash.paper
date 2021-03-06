% Generated by roxygen2: do not edit by hand
% Please edit documentation in R/misc.R
\name{path.order}
\alias{path.order}
\title{Ordering of Predictors by Regularization Path}
\usage{
path.order(fit)
}
\arguments{
\item{fit}{The output of a function such as \code{glmnet} from the
\code{glmnet} package or \code{ncvreg} from the \code{ncvfeg} that
estimates a "regularization path" for all predictors.}
}
\value{
An ordering of the predictors.
}
\description{
This function determines an ordering of the predictors
 based on the regularization path of the penalized regression; in
  particular, the predictors are ordered based on the order in which
  the coefficients are included in the model as the penalty strength
  decreases.
}
\examples{
### generate synthetic data
set.seed(1)
n           = 200
p           = 300
X           = matrix(rnorm(n*p),n,p)
beta        = double(p)
beta[1:10]  = 1:10
y           = X \%*\% beta + rnorm(n)

### glmnet fit
library(glmnet)
fit.lasso = glmnet(X, y)
lasso.order = path.order(fit.lasso)

### ncvreg fit
library(ncvreg)
fit.scad = ncvreg(X, y)
scad.order = path.order(fit.scad)

}
