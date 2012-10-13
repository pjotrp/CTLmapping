#ifdef __cplusplus
  extern "C" {
#endif
  #ifndef __VECTOR_H__
    #define __VECTOR_H__

    #include <stdio.h>
    #include <stdlib.h>
    #include <math.h>
    #include <float.h>

    //Custom length index vector
    typedef struct{
      int* data;
      size_t  nelements;
    } clvector;

    char*    newcvector(size_t dim);
    double*  newdvector(size_t dim);
    int*     newivector(size_t dim);

    char*    addtocvector(const char*   v, size_t dim, char n);    
    double*  addtodvector(const double* v, size_t dim, double n);
    int*     addtoivector(const int*    v, size_t dim, int n);
    
    void     printcvector(const char*   v, size_t dim);
    void     printdvector(const double* v, size_t dim);
    void     printivector(const int*    v, size_t dim);

    int*     randomizeivector(int* idx, size_t dim);

    clvector which(const int*  v, size_t dim, int type);
    double*  get(const double* v, clvector idxs);

  #endif //__VECTOR_H__
#ifdef __cplusplus
  }
#endif