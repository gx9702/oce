// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomInt_TheMultiLineToolOfWLApprox_HeaderFile
#define _GeomInt_TheMultiLineToolOfWLApprox_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _GeomInt_TheMultiLineOfWLApprox_HeaderFile
#include <GeomInt_TheMultiLineOfWLApprox.hxx>
#endif
#ifndef _Approx_Status_HeaderFile
#include <Approx_Status.hxx>
#endif
class GeomInt_TheMultiLineOfWLApprox;
class ApproxInt_SvSurfaces;
class TColgp_Array1OfPnt;
class TColgp_Array1OfPnt2d;
class TColgp_Array1OfVec;
class TColgp_Array1OfVec2d;



class GeomInt_TheMultiLineToolOfWLApprox  {
public:

  DEFINE_STANDARD_ALLOC

  
      static  Standard_Integer FirstPoint(const GeomInt_TheMultiLineOfWLApprox& ML) ;
  
      static  Standard_Integer LastPoint(const GeomInt_TheMultiLineOfWLApprox& ML) ;
  
      static  Standard_Integer NbP2d(const GeomInt_TheMultiLineOfWLApprox& ML) ;
  
      static  Standard_Integer NbP3d(const GeomInt_TheMultiLineOfWLApprox& ML) ;
  
      static  void Value(const GeomInt_TheMultiLineOfWLApprox& ML,const Standard_Integer MPointIndex,TColgp_Array1OfPnt& tabPt) ;
  
      static  void Value(const GeomInt_TheMultiLineOfWLApprox& ML,const Standard_Integer MPointIndex,TColgp_Array1OfPnt2d& tabPt2d) ;
  
      static  void Value(const GeomInt_TheMultiLineOfWLApprox& ML,const Standard_Integer MPointIndex,TColgp_Array1OfPnt& tabPt,TColgp_Array1OfPnt2d& tabPt2d) ;
  
      static  Standard_Boolean Tangency(const GeomInt_TheMultiLineOfWLApprox& ML,const Standard_Integer MPointIndex,TColgp_Array1OfVec& tabV) ;
  
      static  Standard_Boolean Tangency(const GeomInt_TheMultiLineOfWLApprox& ML,const Standard_Integer MPointIndex,TColgp_Array1OfVec2d& tabV2d) ;
  
      static  Standard_Boolean Tangency(const GeomInt_TheMultiLineOfWLApprox& ML,const Standard_Integer MPointIndex,TColgp_Array1OfVec& tabV,TColgp_Array1OfVec2d& tabV2d) ;
  
      static  Standard_Boolean Curvature(const GeomInt_TheMultiLineOfWLApprox& ML,const Standard_Integer MPointIndex,TColgp_Array1OfVec& tabV) ;
  
      static  Standard_Boolean Curvature(const GeomInt_TheMultiLineOfWLApprox& ML,const Standard_Integer MPointIndex,TColgp_Array1OfVec2d& tabV2d) ;
  
      static  Standard_Boolean Curvature(const GeomInt_TheMultiLineOfWLApprox& ML,const Standard_Integer MPointIndex,TColgp_Array1OfVec& tabV,TColgp_Array1OfVec2d& tabV2d) ;
  
      static  GeomInt_TheMultiLineOfWLApprox MakeMLBetween(const GeomInt_TheMultiLineOfWLApprox& ML,const Standard_Integer I1,const Standard_Integer I2,const Standard_Integer NbPMin) ;
  
      static  Approx_Status WhatStatus(const GeomInt_TheMultiLineOfWLApprox& ML,const Standard_Integer I1,const Standard_Integer I2) ;





protected:





private:





};

#define TheMultiLine GeomInt_TheMultiLineOfWLApprox
#define TheMultiLine_hxx <GeomInt_TheMultiLineOfWLApprox.hxx>
#define TheMultiMPoint ApproxInt_SvSurfaces
#define TheMultiMPoint_hxx <ApproxInt_SvSurfaces.hxx>
#define ApproxInt_MultiLineTool GeomInt_TheMultiLineToolOfWLApprox
#define ApproxInt_MultiLineTool_hxx <GeomInt_TheMultiLineToolOfWLApprox.hxx>

#include <ApproxInt_MultiLineTool.lxx>

#undef TheMultiLine
#undef TheMultiLine_hxx
#undef TheMultiMPoint
#undef TheMultiMPoint_hxx
#undef ApproxInt_MultiLineTool
#undef ApproxInt_MultiLineTool_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
