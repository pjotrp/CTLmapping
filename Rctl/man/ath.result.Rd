\name{ath.result}
\alias{ath.result}
\docType{data}

\title{ 
  Output of QCLscan after 5000 permutations on the metabolite expression data from Arabidopsis Thaliana.
}

\description{
  Results from a QCLscan on Arabidopsis recombinant inbred lines by selfing.  There are 162 lines, 24 phenotypes, 
  and 117 markers on 5 chromosomes stored as a list with 3 matrices: genotypes, phenotypes, map
}
\usage{
  data(ath.result)
}
\format{
  Cross object from R/QTL
}
\details{
  Results from a QCLscan on Arabidopsis recombinant inbred lines by selfing.  There are 162 lines, 24 
  phenotypes, and 117 markers on 5 chromosomes. the QCLscan also includes 5000 permutations
}
\source{
  Part of the Arabidopsis RIL selfing experiment with Landsberg Erecta (Ler) and Cape Verde 
  Islands (Cvi) with 162 individuals scored (with errors) at 117 markers. Dataset obtained 
  from GBIC - Groningen BioInformatics Centre, University of Groningen.
}
\references{
  \itemize{
   
   \item Keurentjes, J. J. and Fu, J. and de Vos, C. H. and Lommen, A. and Hall, 
   R. D. and Bino, R. J. and van der Plas, L. H. and Jansen, R. C. and 
   Vreugdenhil, D. and Koornneef, M.
   (2006), The genetics of plant metabolism. \emph{Nature Genetics.}
   \bold{38}-7, 842--849. 

   \item Alonso-Blanco, C. and Peeters, A. J. and Koornneef, M. and Lister, C. 
   and Dean, C. and van den Bosch, N. and Pot, J. and Kuiper, M. T. (1998),
   Development of an AFLP based linkage map of Ler, Col and Cvi
   Arabidopsis thaliana ecotypes and construction of a Ler/Cvi recombinant
   inbred line population. \emph{Plant J.} \bold{14}(2), 259--271.
 }
}

\examples{
data(ath.result)           # Arabidopsis thaliana dataset
ath.result[[1]]            # Print the QCLscan summary of the phenotype 1
}

\keyword{datasets}
