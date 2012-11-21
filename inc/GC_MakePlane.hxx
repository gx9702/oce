// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GC_MakePlane_HeaderFile
#define _GC_MakePlane_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_Geom_Plane_HeaderFile
#include <Handle_Geom_Plane.hxx>
#endif
#ifndef _GC_Root_HeaderFile
#include <GC_Root.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
class Geom_Plane;
class StdFail_NotDone;
class gp_Ax2;
class gp_Pln;
class gp_Pnt;
class gp_Dir;
class gp_Ax1;


//! This class implements the following algorithms used <br>
//!           to create a Plane from gp. <br>
//!           * Create a Plane parallel to another and passing <br>
//!             through a point. <br>
//!           * Create a Plane passing through 3 points. <br>
//!           * Create a Plane by its normal <br>
//!           A MakePlane object provides a framework for: <br>
//!           -   defining the construction of the plane, <br>
//!           -   implementing the construction algorithm, and <br>
//!           -   consulting the results. In particular, the Value <br>
//!           function returns the constructed plane. <br>
class GC_MakePlane  : public GC_Root {
public:

  DEFINE_STANDARD_ALLOC

  
//!  Creates a plane located in 3D space with an axis placement <br>
//!  two axis.  The "ZDirection" of "A2" is the direction normal <br>
//!  to the plane.  The "Location" point of "A2" is the origin of <br>
//!  the plane. The "XDirection" and "YDirection" of "A2" define <br>
//!  the directions of the U isoparametric and V isoparametric <br>
//!  curves. <br>
  Standard_EXPORT   GC_MakePlane(const gp_Ax2& A2);
  
//!  Creates a plane from a non persistent plane from package gp. <br>
  Standard_EXPORT   GC_MakePlane(const gp_Pln& Pl);
  
//!  P is the "Location" point or origin of the plane. <br>
//!  V is the direction normal to the plane. <br>
  Standard_EXPORT   GC_MakePlane(const gp_Pnt& P,const gp_Dir& V);
  
//!  Creates a plane from its cartesian equation : <br>
//!  Ax + By + Cz + D = 0.0 <br>
//!  Status is "BadEquation" if Sqrt (A*A + B*B + C*C) <br>
//!  <= Resolution from gp <br>
  Standard_EXPORT   GC_MakePlane(const Standard_Real A,const Standard_Real B,const Standard_Real C,const Standard_Real D);
  //! Make a Plane from Geom <ThePlane> parallel to another <br>
//!           Pln <Pln> and passing through a Pnt <Point>. <br>
  Standard_EXPORT   GC_MakePlane(const gp_Pln& Pln,const gp_Pnt& Point);
  //! Make a Plane from Geom <ThePlane> parallel to another <br>
//!           Pln <Pln> at the distance <Dist> which can be greater <br>
//!           or lower than zero. <br>
//!           In the first case the result is at the distance <br>
//!           <Dist> to the plane <Pln> in the direction of the <br>
//!           normal to <Pln>. <br>
//!           Otherwize it is in the oposite direction. <br>
  Standard_EXPORT   GC_MakePlane(const gp_Pln& Pln,const Standard_Real Dist);
  //! Make a Plane from Geom <ThePlane> passing through 3 <br>
//!           Pnt <P1>,<P2>,<P3>. <br>
//!           It returns false if <P1> <P2> <P3> are confused. <br>
  Standard_EXPORT   GC_MakePlane(const gp_Pnt& P1,const gp_Pnt& P2,const gp_Pnt& P3);
  //! Make a Plane  passing through the location of <Axis>and <br>
//!          normal to the Direction of <Axis>. <br>
  Standard_EXPORT   GC_MakePlane(const gp_Ax1& Axis);
  //! Returns the constructed plane. <br>
//! Exceptions StdFail_NotDone if no plane is constructed. <br>
  Standard_EXPORT    const Handle_Geom_Plane& Value() const;
  
  Standard_EXPORT    const Handle_Geom_Plane& Operator() const;
Standard_EXPORT operator Handle_Geom_Plane() const;





protected:





private:



Handle_Geom_Plane ThePlane;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
