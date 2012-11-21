// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTrans_SurfaceTransition_HeaderFile
#define _TopTrans_SurfaceTransition_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _gp_Dir_HeaderFile
#include <gp_Dir.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _TColStd_Array2OfReal_HeaderFile
#include <TColStd_Array2OfReal.hxx>
#endif
#ifndef _TopTrans_Array2OfOrientation_HeaderFile
#include <TopTrans_Array2OfOrientation.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_Orientation_HeaderFile
#include <TopAbs_Orientation.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
class gp_Dir;


//! This algorithm  is used to  compute the transition <br>
//!          of a 3D surface intersecting a topological surfacic <br>
//!          boundary on a 3D curve ( intersection curve ). <br>
//!          The  boundary is  described  by a  set of faces <br>
//!          each face is described by <br>
//!          - its support surface, <br>
//!          - an orientation defining its matter side. <br>
//!          The geometric elements are described locally at the <br>
//!          intersection point by a second order development. <br>
//!          A surface is described by the normal vector, the <br>
//!          principal directions and the principal curvatures. <br>
//!          A curve is described  by the  tangent, the normal <br>
//!          and the curvature. <br>
//!          The  algorithm  keeps track of the two faces elements <br>
//!          closest to the part of the curve "before" and "after" <br>
//!          the intersection,  these  two elements are updated <br>
//!          for each new face. <br>
//!          The position of the  curve can be computed when at <br>
//!          least  one surface  element has   been given, this <br>
//!          position is "In","Out" or "On" for the part of the <br>
//!          curve "Before" or "After" the intersection. <br>
class TopTrans_SurfaceTransition  {
public:

  DEFINE_STANDARD_ALLOC

  //! Create an empty Surface Transition. <br>
  Standard_EXPORT   TopTrans_SurfaceTransition();
  //! Initialize  a  Surface Transition with the local <br>
//!          description of the intersection curve and of the <br>
//!          reference surface. <br>
//!          PREQUESITORY : Norm oriented OUTSIDE "geometric matter" <br>
  Standard_EXPORT     void Reset(const gp_Dir& Tgt,const gp_Dir& Norm,const gp_Dir& MaxD,const gp_Dir& MinD,const Standard_Real MaxCurv,const Standard_Real MinCurv) ;
  //! Initialize  a  Surface Transition  with the  local <br>
//!          description of a straight line. <br>
  Standard_EXPORT     void Reset(const gp_Dir& Tgt,const gp_Dir& Norm) ;
  //! Add a face element to the boundary. <br>
//! <br>
//!          - S defines topological orientation for the face : <br>
//!          S FORWARD means: along the intersection curve on the <br>
//!          reference surface, transition states while crossing <br>
//!          the face are OUT,IN. <br>
//!          S REVERSED means states are IN,OUT. <br>
//!          S INTERNAL means states are IN,IN. <br>
//! <br>
//!          - O defines curve's position on face : <br>
//!          O FORWARD means the face is before the intersection <br>
//!          O REVERSED means the face is AFTER <br>
//!          O INTERNAL means the curve intersection is in the face. <br>
//!          PREQUESITORY : Norm oriented OUTSIDE "geometric matter" <br>
  Standard_EXPORT     void Compare(const Standard_Real Tole,const gp_Dir& Norm,const gp_Dir& MaxD,const gp_Dir& MinD,const Standard_Real MaxCurv,const Standard_Real MinCurv,const TopAbs_Orientation S,const TopAbs_Orientation O) ;
  //! Add a plane or a cylindric face to the boundary. <br>
  Standard_EXPORT     void Compare(const Standard_Real Tole,const gp_Dir& Norm,const TopAbs_Orientation S,const TopAbs_Orientation O) ;
  //! Returns the state of the reference surface before <br>
//!          the interference, this is the position relative to <br>
//!          the surface of a  point very close to the intersection <br>
//!          on the negative side of the tangent. <br>
  Standard_EXPORT     TopAbs_State StateBefore() const;
  //! Returns the state of the reference surface after <br>
//!          interference, this is the position relative to the <br>
//!          surface of a point very  close to the intersection <br>
//!          on the positive side of the tangent. <br>
  Standard_EXPORT     TopAbs_State StateAfter() const;
  
  Standard_EXPORT   static  TopAbs_State GetBefore(const TopAbs_Orientation Tran) ;
  
  Standard_EXPORT   static  TopAbs_State GetAfter(const TopAbs_Orientation Tran) ;





protected:





private:

  
  Standard_EXPORT     void UpdateReference(const Standard_Real Tole,const Standard_Boolean isInfRef,Standard_Real& CosInf,Standard_Real& CosSup,const TopAbs_Orientation Tran,TopAbs_Orientation& TranRef) ;
  
  Standard_EXPORT     Standard_Real ComputeCos(const Standard_Real Tole,const gp_Dir& Norm,const TopAbs_Orientation O,Standard_Boolean& isleft) const;


gp_Dir myTgt;
gp_Dir myNorm;
gp_Dir beafter;
Standard_Real myCurvRef;
TColStd_Array2OfReal myAng;
TColStd_Array2OfReal myCurv;
TopTrans_Array2OfOrientation myOri;
Standard_Boolean myTouchFlag;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
