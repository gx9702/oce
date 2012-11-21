// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _UnitsMethods_HeaderFile
#define _UnitsMethods_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Handle_Geom_Surface_HeaderFile
#include <Handle_Geom_Surface.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Geom2d_Curve;
class Geom_Surface;



class UnitsMethods  {
public:

  DEFINE_STANDARD_ALLOC

  //! Initializes the 3 factors for the conversion of <br>
//!          units <br>
  Standard_EXPORT   static  void InitializeFactors(const Standard_Real LengthFactor,const Standard_Real PlaneAngleFactor,const Standard_Real SolidAngleFactor) ;
  
  Standard_EXPORT   static  Standard_Real LengthFactor() ;
  
  Standard_EXPORT   static  Standard_Real PlaneAngleFactor() ;
  
  Standard_EXPORT   static  Standard_Real SolidAngleFactor() ;
  
  Standard_EXPORT   static  void Set3dConversion(const Standard_Boolean B) ;
  
  Standard_EXPORT   static  Standard_Boolean Convert3d() ;
  
  Standard_EXPORT   static  Handle_Geom2d_Curve RadianToDegree(const Handle(Geom2d_Curve)& C,const Handle(Geom_Surface)& S) ;
  
  Standard_EXPORT   static  Handle_Geom2d_Curve DegreeToRadian(const Handle(Geom2d_Curve)& C,const Handle(Geom_Surface)& S) ;
  
  Standard_EXPORT   static  Handle_Geom2d_Curve MirrorPCurve(const Handle(Geom2d_Curve)& C) ;
  //! Returns value of unit encoded by parameter param <br>
//!          (integer value denoting unit, as described in IGES <br>
//!          standard) in millimeters <br>
  Standard_EXPORT   static  Standard_Real GetLengthFactorValue(const Standard_Integer param) ;
  //! Returns value of current internal unit for CASCADE <br>
//!          in millemeters <br>
  Standard_EXPORT   static  Standard_Real GetCasCadeLengthUnit() ;
  //! Sets value of current internal unit for CASCADE <br>
//!          by parameter param (integer value denoting unit, <br>
//!          as described in IGES standard) <br>
//!          GetCasCadeLengthUnit() will then return value <br>
//!          equal to GetLengthFactorValue(param) <br>
  Standard_EXPORT   static  void SetCasCadeLengthUnit(const Standard_Integer param) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
