/******************************************************************//**
 * \file Rctl/src/vector.h
 * \brief Definition of functions related to 2D vectors
 *
 * <i>Copyright (c) 2010-2013</i> GBIC - Danny Arends<br>
 * Last modified Feb, 2013<br>
 * First written 2011<br>
 **********************************************************************/
#ifdef __cplusplus
  extern "C" {
#endif
  #ifndef __VECTOR_H__
    #define __VECTOR_H__

    #include "ctl.h"

    //Custom length index vector
    typedef struct{
      int* data;
      size_t  nelements;
    } clvector;

    char*    newcvector(size_t dim);
    double*  newdvector(size_t dim);
    int*     newivector(size_t dim);
    clvector newclvector(size_t dim);

    char*    addtocvector(char*   v, size_t dim, char n);    
    double*  addtodvector(double* v, size_t dim, double n);
    int*     addtoivector(int*    v, size_t dim, int n);
    
    void     printcvector(const char*   v, size_t dim);
    void     printdvector(const double* v, size_t dim);
    void     printivector(const int*    v, size_t dim);

    int*     randomizeivector(int* idx, size_t dim);

    double* torank(double* v, size_t dim);

    clvector which(const int* v, size_t dim, int type);
    double*  get(const double* v, clvector idxs);
    bool     in(const clvector vector, int val);

    double vectormax(double* v, size_t dim);

  #endif //__VECTOR_H__
#ifdef __cplusplus
  }
#endif
