// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _GeomToStep_MakeDirection_HeaderFile
#define _GeomToStep_MakeDirection_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_StepGeom_Direction_HeaderFile
#include <Handle_StepGeom_Direction.hxx>
#endif
#ifndef _GeomToStep_Root_HeaderFile
#include <GeomToStep_Root.hxx>
#endif
#ifndef _Handle_Geom_Direction_HeaderFile
#include <Handle_Geom_Direction.hxx>
#endif
#ifndef _Handle_Geom2d_Direction_HeaderFile
#include <Handle_Geom2d_Direction.hxx>
#endif
class StepGeom_Direction;
class StdFail_NotDone;
class gp_Dir;
class gp_Dir2d;
class Geom_Direction;
class Geom2d_Direction;


//! This class implements the mapping between classes <br>
//!          Direction from Geom, Geom2d and Dir, Dir2d from gp, and the <br>
//!          class Direction from StepGeom which describes a direction <br>
//!          from Prostep. <br>
class GeomToStep_MakeDirection  : public GeomToStep_Root {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   GeomToStep_MakeDirection(const gp_Dir& D);
  
  Standard_EXPORT   GeomToStep_MakeDirection(const gp_Dir2d& D);
  
  Standard_EXPORT   GeomToStep_MakeDirection(const Handle(Geom_Direction)& D);
  
  Standard_EXPORT   GeomToStep_MakeDirection(const Handle(Geom2d_Direction)& D);
  
  Standard_EXPORT    const Handle_StepGeom_Direction& Value() const;





protected:





private:



Handle_StepGeom_Direction theDirection;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
