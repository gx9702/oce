// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Contap_HCurve2dTool_HeaderFile
#define _Contap_HCurve2dTool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Adaptor2d_HCurve2d_HeaderFile
#include <Handle_Adaptor2d_HCurve2d.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _GeomAbs_Shape_HeaderFile
#include <GeomAbs_Shape.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _gp_Pnt2d_HeaderFile
#include <gp_Pnt2d.hxx>
#endif
#ifndef _gp_Vec2d_HeaderFile
#include <gp_Vec2d.hxx>
#endif
#ifndef _GeomAbs_CurveType_HeaderFile
#include <GeomAbs_CurveType.hxx>
#endif
#ifndef _gp_Lin2d_HeaderFile
#include <gp_Lin2d.hxx>
#endif
#ifndef _gp_Circ2d_HeaderFile
#include <gp_Circ2d.hxx>
#endif
#ifndef _gp_Elips2d_HeaderFile
#include <gp_Elips2d.hxx>
#endif
#ifndef _gp_Hypr2d_HeaderFile
#include <gp_Hypr2d.hxx>
#endif
#ifndef _gp_Parab2d_HeaderFile
#include <gp_Parab2d.hxx>
#endif
#ifndef _Handle_Geom2d_BezierCurve_HeaderFile
#include <Handle_Geom2d_BezierCurve.hxx>
#endif
#ifndef _Handle_Geom2d_BSplineCurve_HeaderFile
#include <Handle_Geom2d_BSplineCurve.hxx>
#endif
class Standard_OutOfRange;
class Standard_NoSuchObject;
class Standard_DomainError;
class Adaptor2d_HCurve2d;
class TColStd_Array1OfReal;
class gp_Pnt2d;
class gp_Vec2d;
class Geom2d_BezierCurve;
class Geom2d_BSplineCurve;



class Contap_HCurve2dTool  {
public:

  DEFINE_STANDARD_ALLOC

  
      static  Standard_Real FirstParameter(const Handle(Adaptor2d_HCurve2d)& C) ;
  
      static  Standard_Real LastParameter(const Handle(Adaptor2d_HCurve2d)& C) ;
  
      static  GeomAbs_Shape Continuity(const Handle(Adaptor2d_HCurve2d)& C) ;
  
      static  Standard_Integer NbIntervals(const Handle(Adaptor2d_HCurve2d)& C,const GeomAbs_Shape S) ;
  
      static  void Intervals(const Handle(Adaptor2d_HCurve2d)& C,TColStd_Array1OfReal& T,const GeomAbs_Shape S) ;
  
      static  Standard_Boolean IsClosed(const Handle(Adaptor2d_HCurve2d)& C) ;
  
      static  Standard_Boolean IsPeriodic(const Handle(Adaptor2d_HCurve2d)& C) ;
  
      static  Standard_Real Period(const Handle(Adaptor2d_HCurve2d)& C) ;
  
      static  gp_Pnt2d Value(const Handle(Adaptor2d_HCurve2d)& C,const Standard_Real U) ;
  
      static  void D0(const Handle(Adaptor2d_HCurve2d)& C,const Standard_Real U,gp_Pnt2d& P) ;
  
      static  void D1(const Handle(Adaptor2d_HCurve2d)& C,const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V) ;
  
      static  void D2(const Handle(Adaptor2d_HCurve2d)& C,const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2) ;
  
      static  void D3(const Handle(Adaptor2d_HCurve2d)& C,const Standard_Real U,gp_Pnt2d& P,gp_Vec2d& V1,gp_Vec2d& V2,gp_Vec2d& V3) ;
  
      static  gp_Vec2d DN(const Handle(Adaptor2d_HCurve2d)& C,const Standard_Real U,const Standard_Integer N) ;
  
      static  Standard_Real Resolution(const Handle(Adaptor2d_HCurve2d)& C,const Standard_Real R3d) ;
  
      static  GeomAbs_CurveType GetType(const Handle(Adaptor2d_HCurve2d)& C) ;
  
      static  gp_Lin2d Line(const Handle(Adaptor2d_HCurve2d)& C) ;
  
      static  gp_Circ2d Circle(const Handle(Adaptor2d_HCurve2d)& C) ;
  
      static  gp_Elips2d Ellipse(const Handle(Adaptor2d_HCurve2d)& C) ;
  
      static  gp_Hypr2d Hyperbola(const Handle(Adaptor2d_HCurve2d)& C) ;
  
      static  gp_Parab2d Parabola(const Handle(Adaptor2d_HCurve2d)& C) ;
  
      static  Handle_Geom2d_BezierCurve Bezier(const Handle(Adaptor2d_HCurve2d)& C) ;
  
      static  Handle_Geom2d_BSplineCurve BSpline(const Handle(Adaptor2d_HCurve2d)& C) ;
  
  Standard_EXPORT   static  Standard_Integer NbSamples(const Handle(Adaptor2d_HCurve2d)& C,const Standard_Real U0,const Standard_Real U1) ;





protected:





private:





};

#define CurveGen Handle_Adaptor2d_HCurve2d
#define CurveGen_hxx <Adaptor2d_HCurve2d.hxx>
#define Contap_HCurve2dToolGen Contap_HCurve2dTool
#define Contap_HCurve2dToolGen_hxx <Contap_HCurve2dTool.hxx>

#include <Contap_HCurve2dToolGen.lxx>

#undef CurveGen
#undef CurveGen_hxx
#undef Contap_HCurve2dToolGen
#undef Contap_HCurve2dToolGen_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
