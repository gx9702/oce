// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Select3D_SensitivePoint_HeaderFile
#define _Select3D_SensitivePoint_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_Select3D_SensitivePoint.hxx>

#include <Select3D_Pnt.hxx>
#include <Select3D_Pnt2d.hxx>
#include <Select3D_SensitiveEntity.hxx>
#include <Handle_SelectBasics_EntityOwner.hxx>
#include <Handle_Select3D_Projector.hxx>
#include <Handle_Select3D_SensitiveEntity.hxx>
#include <Standard_Boolean.hxx>
#include <SelectBasics_PickArgs.hxx>
#include <Standard_Real.hxx>
#include <Standard_OStream.hxx>
class SelectBasics_EntityOwner;
class gp_Pnt;
class Select3D_Projector;
class SelectBasics_ListOfBox2d;
class Select3D_SensitiveEntity;
class TopLoc_Location;
class TColgp_Array1OfPnt2d;
class Bnd_Box2d;
class gp_Lin;


//! A framework to define sensitive 3D points.
class Select3D_SensitivePoint : public Select3D_SensitiveEntity
{

public:

  
  //! Constructs a sensitive point object defined by the
  //! owner OwnerId and the point Point.
  Standard_EXPORT Select3D_SensitivePoint(const Handle(SelectBasics_EntityOwner)& OwnerId, const gp_Pnt& Point);
  
  //! Converts the stored 3D point into a 2D point according
  //! to <aProjector> ; this method is called by the selection Manager.
  Standard_EXPORT   void Project (const Handle(Select3D_Projector)& aProjector) ;
  
  //! stores in <aresult> the 2D sensitive box which represents
  //! the point area in the selection process.
  Standard_EXPORT   void Areas (SelectBasics_ListOfBox2d& aresult) ;
  
  Standard_EXPORT   Handle(Select3D_SensitiveEntity) GetConnected (const TopLoc_Location& aLocation) ;
  
  //! Checks whether the sensitive entity matches the picking
  //! detection area (close to the picking line).
  //! For details please refer to base class declaration.
  Standard_EXPORT   Standard_Boolean Matches (const SelectBasics_PickArgs& thePickArgs, Standard_Real& theMatchDMin, Standard_Real& theMatchDepth) ;
  
  Standard_EXPORT   Standard_Boolean Matches (const Standard_Real XMin, const Standard_Real YMin, const Standard_Real XMax, const Standard_Real YMax, const Standard_Real aTol) ;
  
  Standard_EXPORT virtual   Standard_Boolean Matches (const TColgp_Array1OfPnt2d& Polyline, const Bnd_Box2d& aBox, const Standard_Real aTol) ;
  
  Standard_EXPORT   Standard_Real ComputeDepth (const gp_Lin& EyeLine)  const;
  
  //! Returns the point used at the time of construction.
  Standard_EXPORT   gp_Pnt Point()  const;
  
  Standard_EXPORT virtual   void Dump (Standard_OStream& S, const Standard_Boolean FullDump = Standard_True)  const;




  DEFINE_STANDARD_RTTI(Select3D_SensitivePoint)

protected:




private: 


  Select3D_Pnt mypoint;
  Select3D_Pnt2d myprojpt;


};







#endif // _Select3D_SensitivePoint_HeaderFile
