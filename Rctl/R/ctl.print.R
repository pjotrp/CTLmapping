#
# ctl.print.R
#
# copyright (c) 2010-2011 Danny Arends and Ritsert C. Jansen
# last modified Jan, 2012
# first written Oct, 2011
# 
# Print routines for CTL analysis
#

print.CTLscan <- function(x, ...){
  cat("CTLscan summary",attr(x$ctl,"name"),"\n\n")
  cat("- Number of background phenotypes",dim(x$ctl)[1],"\n")
  cat("- Number of markers",dim(x$ctl)[2],"\n")
  cat("- Number of permutations",length(unlist(x$p))/dim(x$ctl)[2],"\n")
  getPermuteThresholds(x,..., verbose = TRUE)
}

getPermuteThresholds <-function(x, significance = c(.05,.01,.001), ..., verbose = FALSE){
  if(any(class(x)=="CTLscan")){
    n <- dim(x$ctl)[2]
    x <- x$p
    if(!any(class(x)=="CTLpermute")) stop("No permutations found in the CTLscan object")
  }else{
    n <- 1
    if(!any(class(x)=="CTLpermute")){
      stop("No CTLscan object")
    }
  }
  sorted <- sort(unlist(x))
  l <- length(sorted)
  values <- NULL
  valnames <- NULL
  for(x in significance){
    if(1/(x/n) < length(sorted)){
      v <- sorted[l*(1-(x/n))]
      values <- c(values,v)
      valnames <- c(valnames,paste(x*100,"%"))
      if(verbose) cat(x*100,"%\t",v,"\n")
    }else{
      values <- c(values,NaN)
      valnames <- c(valnames,paste(x*100,"%"))
      if(verbose) cat(x*100,"%\t",NaN,"\n")
    }
  }
  names(values) <- valnames
  values
}

print.CTLpermute <- function(x, ...){
  getPermuteThresholds(x, ..., verbose=TRUE)
}

# end of ctl.print.R