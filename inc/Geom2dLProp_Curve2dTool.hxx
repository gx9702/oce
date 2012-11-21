// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dLProp_Curve2dTool_HeaderFile
#define _Geom2dLProp_Curve2dTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom2d_Curve_HeaderFile
#include <Handle_Geom2d_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Geom2d_Curve;
class gp_Pnt2d;
class gp_Vec2d;



class Geom2dLProp_Curve2dTool  {
public:

  DEFINE_STANDARD_ALLOC

  //! Computes the point <P> of parameter <U> on the curve <C>. <br>
  Standard_EXPORT   static  void Value(const Handle(Geom2d_Curve)& C,const Standard_Real U,gp_Pnt2d& P) ;
  //! Computes the point <P> and first derivative <V1> of <br>
//!          parameter <U> on the curve <C>. <br>
  Standard_EXPORT   static  void D1(const Handle(Geom2d_Curve)& C,const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1) ;
  //! Computes the point <P>, the first derivative <V1> and second <br>
//!          derivative <V2> of parameter <U> on the curve <C>. <br>
  Standard_EXPORT   static  void D2(const Handle(Geom2d_Curve)& C,const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2) ;
  //! Computes the point <P>, the first derivative <V1>, the <br>
//!          second derivative <V2> and third derivative <V3> of <br>
//!          parameter <U> on the curve <C>. <br>
  Standard_EXPORT   static  void D3(const Handle(Geom2d_Curve)& C,const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2,gp_Vec2d& V3) ;
  //! returns the order of continuity of the curve <C>. <br>
//!          returns 1 : first derivative only is computable <br>
//!          returns 2 : first and second derivative only are computable. <br>
//!          returns 3 : first, second and third are computable. <br>
  Standard_EXPORT   static  Standard_Integer Continuity(const Handle(Geom2d_Curve)& C) ;
  //! returns the first parameter bound of the curve. <br>
//! <br>
  Standard_EXPORT   static  Standard_Real FirstParameter(const Handle(Geom2d_Curve)& C) ;
  //! returns the last parameter bound of the curve. <br>
//!          FirstParameter must be less than LastParameter. <br>
  Standard_EXPORT   static  Standard_Real LastParameter(const Handle(Geom2d_Curve)& C) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
