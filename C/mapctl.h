#ifdef __cplusplus
  extern "C" {
#endif
  #ifndef __MAPCTL_H__
    #define __MAPCTL_H__
    
    #include "correlation.h"
    
    double** ctlmapping(Phenotypes phenotypes, Genotypes genotypes, size_t phenotype);
    double*  permutation(Phenotypes phenotypes, Genotypes genotypes, size_t phenotype, size_t nperms, int verbose);
    double** toLOD(double** scores, double* permutations);
  
  #endif //__MAPCTL_H__
#ifdef __cplusplus
  }
#endif
