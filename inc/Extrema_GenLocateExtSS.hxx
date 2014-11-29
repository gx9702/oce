// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Extrema_GenLocateExtSS_HeaderFile
#define _Extrema_GenLocateExtSS_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Boolean.hxx>
#include <Standard_Real.hxx>
#include <Extrema_POnSurf.hxx>
class Standard_DomainError;
class StdFail_NotDone;
class Adaptor3d_Surface;
class Extrema_POnSurf;


//! With two close points it calculates the distance
//! between two surfaces.
//! This distance can be a minimum or a maximum.
class Extrema_GenLocateExtSS 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT Extrema_GenLocateExtSS();
  
  //! Calculates the distance with two close points.
  //! The close points are defined by the parameter values
  //! (U1,V1) for S1 and (U2,V2) for S2.
  //! The function F(u1,v1,u2,v2)=distance(S1(u1,v1),S2(u2,v2))
  //! has an extremun when gradient(F)=0. The algorithm searchs
  //! a zero near the close points.
  Standard_EXPORT Extrema_GenLocateExtSS(const Adaptor3d_Surface& S1, const Adaptor3d_Surface& S2, const Standard_Real U1, const Standard_Real V1, const Standard_Real U2, const Standard_Real V2, const Standard_Real Tol1, const Standard_Real Tol2);
  
  Standard_EXPORT   void Perform (const Adaptor3d_Surface& S1, const Adaptor3d_Surface& S2, const Standard_Real U1, const Standard_Real V1, const Standard_Real U2, const Standard_Real V2, const Standard_Real Tol1, const Standard_Real Tol2) ;
  
  //! Returns True if the distance is found.
  Standard_EXPORT   Standard_Boolean IsDone()  const;
  
  //! Returns the value of the extremum square distance.
  Standard_EXPORT   Standard_Real SquareDistance()  const;
  
  //! Returns the point of the extremum distance on S1.
  Standard_EXPORT  const  Extrema_POnSurf& PointOnS1()  const;
  
  //! Returns the point of the extremum distance on S2.
  Standard_EXPORT  const  Extrema_POnSurf& PointOnS2()  const;




protected:





private:



  Standard_Boolean myDone;
  Standard_Real mySqDist;
  Extrema_POnSurf myPoint1;
  Extrema_POnSurf myPoint2;


};







#endif // _Extrema_GenLocateExtSS_HeaderFile
