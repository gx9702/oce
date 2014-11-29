// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomPlate_Aij_HeaderFile
#define _GeomPlate_Aij_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <gp_Vec.hxx>
class GeomPlate_BuildAveragePlane;
class gp_Vec;


//! A structure containing indexes of two normals and its cross product
class GeomPlate_Aij 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT GeomPlate_Aij();
  
  Standard_EXPORT GeomPlate_Aij(const Standard_Integer anInd1, const Standard_Integer anInd2, const gp_Vec& aVec);


friend class GeomPlate_BuildAveragePlane;


protected:





private:



  Standard_Integer Ind1;
  Standard_Integer Ind2;
  gp_Vec Vec;


};







#endif // _GeomPlate_Aij_HeaderFile
