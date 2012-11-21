// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Geom2dHatch_ClassifierOfHatcher_HeaderFile
#define _Geom2dHatch_ClassifierOfHatcher_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Geom2dHatch_FClass2dOfClassifierOfHatcher_HeaderFile
#include <Geom2dHatch_FClass2dOfClassifierOfHatcher.hxx>
#endif
#ifndef _Geom2dAdaptor_Curve_HeaderFile
#include <Geom2dAdaptor_Curve.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _IntRes2d_Position_HeaderFile
#include <IntRes2d_Position.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _TopAbs_State_HeaderFile
#include <TopAbs_State.hxx>
#endif
class Standard_DomainError;
class Geom2dHatch_ElementsOfHatcher;
class Geom2dAdaptor_Curve;
class Geom2dHatch_Intersector;
class Geom2dHatch_FClass2dOfClassifierOfHatcher;
class gp_Pnt2d;



class Geom2dHatch_ClassifierOfHatcher  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Geom2dHatch_ClassifierOfHatcher();
  
  Standard_EXPORT   Geom2dHatch_ClassifierOfHatcher(Geom2dHatch_ElementsOfHatcher& F,const gp_Pnt2d& P,const Standard_Real Tol);
  
  Standard_EXPORT     void Perform(Geom2dHatch_ElementsOfHatcher& F,const gp_Pnt2d& P,const Standard_Real Tol) ;
  
  Standard_EXPORT     TopAbs_State State() const;
  
        Standard_Boolean Rejected() const;
  
        Standard_Boolean NoWires() const;
  
  Standard_EXPORT    const Geom2dAdaptor_Curve& Edge() const;
  
  Standard_EXPORT     Standard_Real EdgeParameter() const;
  
        IntRes2d_Position Position() const;





protected:



Geom2dHatch_FClass2dOfClassifierOfHatcher myClassifier;
Geom2dAdaptor_Curve myEdge;
Standard_Real myEdgeParameter;
IntRes2d_Position myPosition;
Standard_Boolean rejected;
Standard_Boolean nowires;


private:





};

#define TheFaceExplorer Geom2dHatch_ElementsOfHatcher
#define TheFaceExplorer_hxx <Geom2dHatch_ElementsOfHatcher.hxx>
#define TheEdge Geom2dAdaptor_Curve
#define TheEdge_hxx <Geom2dAdaptor_Curve.hxx>
#define TheIntersection2d Geom2dHatch_Intersector
#define TheIntersection2d_hxx <Geom2dHatch_Intersector.hxx>
#define TopClass_FClass2d Geom2dHatch_FClass2dOfClassifierOfHatcher
#define TopClass_FClass2d_hxx <Geom2dHatch_FClass2dOfClassifierOfHatcher.hxx>
#define TopClass_FaceClassifier Geom2dHatch_ClassifierOfHatcher
#define TopClass_FaceClassifier_hxx <Geom2dHatch_ClassifierOfHatcher.hxx>

#include <TopClass_FaceClassifier.lxx>

#undef TheFaceExplorer
#undef TheFaceExplorer_hxx
#undef TheEdge
#undef TheEdge_hxx
#undef TheIntersection2d
#undef TheIntersection2d_hxx
#undef TopClass_FClass2d
#undef TopClass_FClass2d_hxx
#undef TopClass_FaceClassifier
#undef TopClass_FaceClassifier_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
