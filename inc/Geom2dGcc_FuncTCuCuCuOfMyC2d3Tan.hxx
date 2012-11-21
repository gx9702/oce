// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dGcc_FuncTCuCuCuOfMyC2d3Tan_HeaderFile
#define _Geom2dGcc_FuncTCuCuCuOfMyC2d3Tan_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Geom2dAdaptor_Curve_HeaderFile
#include <Geom2dAdaptor_Curve.hxx>
#endif
#ifndef _gp_Circ2d_HeaderFile
#include <gp_Circ2d.hxx>
#endif
#ifndef _gp_Lin2d_HeaderFile
#include <gp_Lin2d.hxx>
#endif
#ifndef _GccIter_Type1_HeaderFile
#include <GccIter_Type1.hxx>
#endif
#ifndef _math_FunctionSetWithDerivatives_HeaderFile
#include <math_FunctionSetWithDerivatives.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_ConstructionError;
class Geom2dAdaptor_Curve;
class Geom2dGcc_CurveTool;
class gp_Circ2d;
class gp_Lin2d;
class gp_Pnt2d;
class math_Vector;
class gp_Vec2d;
class math_Matrix;



class Geom2dGcc_FuncTCuCuCuOfMyC2d3Tan  : public math_FunctionSetWithDerivatives {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Geom2dGcc_FuncTCuCuCuOfMyC2d3Tan(const Geom2dAdaptor_Curve& C1,const Geom2dAdaptor_Curve& C2,const Geom2dAdaptor_Curve& C3);
  
  Standard_EXPORT   Geom2dGcc_FuncTCuCuCuOfMyC2d3Tan(const gp_Circ2d& C1,const Geom2dAdaptor_Curve& C2,const Geom2dAdaptor_Curve& C3);
  
  Standard_EXPORT   Geom2dGcc_FuncTCuCuCuOfMyC2d3Tan(const gp_Circ2d& C1,const gp_Circ2d& C2,const Geom2dAdaptor_Curve& C3);
  
  Standard_EXPORT   Geom2dGcc_FuncTCuCuCuOfMyC2d3Tan(const gp_Circ2d& C1,const gp_Lin2d& L2,const Geom2dAdaptor_Curve& C3);
  
  Standard_EXPORT   Geom2dGcc_FuncTCuCuCuOfMyC2d3Tan(const gp_Lin2d& L1,const gp_Lin2d& L2,const Geom2dAdaptor_Curve& C3);
  
  Standard_EXPORT   Geom2dGcc_FuncTCuCuCuOfMyC2d3Tan(const gp_Lin2d& L1,const Geom2dAdaptor_Curve& C2,const Geom2dAdaptor_Curve& C3);
  
  Standard_EXPORT   Geom2dGcc_FuncTCuCuCuOfMyC2d3Tan(const gp_Circ2d& C1,const Geom2dAdaptor_Curve& C2,const gp_Pnt2d& P3);
  
  Standard_EXPORT   Geom2dGcc_FuncTCuCuCuOfMyC2d3Tan(const gp_Lin2d& L1,const Geom2dAdaptor_Curve& C2,const gp_Pnt2d& P3);
  
  Standard_EXPORT   Geom2dGcc_FuncTCuCuCuOfMyC2d3Tan(const Geom2dAdaptor_Curve& C1,const gp_Pnt2d& P2,const gp_Pnt2d& P3);
  
  Standard_EXPORT     void InitDerivative(const math_Vector& X,gp_Pnt2d& Point1,gp_Pnt2d& Point2,gp_Pnt2d& Point3,gp_Vec2d& Tan1,gp_Vec2d& Tan2,gp_Vec2d& Tan3,gp_Vec2d& D21,gp_Vec2d& D22,gp_Vec2d& D23) ;
  
  Standard_EXPORT     Standard_Integer NbVariables() const;
  
  Standard_EXPORT     Standard_Integer NbEquations() const;
  
  Standard_EXPORT     Standard_Boolean Value(const math_Vector& X,math_Vector& F) ;
  
  Standard_EXPORT     Standard_Boolean Derivatives(const math_Vector& X,math_Matrix& D) ;
  
  Standard_EXPORT     Standard_Boolean Values(const math_Vector& X,math_Vector& F,math_Matrix& D) ;





protected:





private:



Geom2dAdaptor_Curve Curv1;
Geom2dAdaptor_Curve Curv2;
Geom2dAdaptor_Curve Curv3;
gp_Circ2d Circ1;
gp_Circ2d Circ2;
gp_Lin2d Lin1;
gp_Lin2d Lin2;
GccIter_Type1 TheType;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
