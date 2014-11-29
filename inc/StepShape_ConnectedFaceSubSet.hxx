// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_ConnectedFaceSubSet_HeaderFile
#define _StepShape_ConnectedFaceSubSet_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepShape_ConnectedFaceSubSet.hxx>

#include <Handle_StepShape_ConnectedFaceSet.hxx>
#include <StepShape_ConnectedFaceSet.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepShape_HArray1OfFace.hxx>
class StepShape_ConnectedFaceSet;
class TCollection_HAsciiString;
class StepShape_HArray1OfFace;


//! Representation of STEP entity ConnectedFaceSubSet
class StepShape_ConnectedFaceSubSet : public StepShape_ConnectedFaceSet
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepShape_ConnectedFaceSubSet();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aRepresentationItem_Name, const Handle(StepShape_HArray1OfFace)& aConnectedFaceSet_CfsFaces, const Handle(StepShape_ConnectedFaceSet)& aParentFaceSet) ;
  
  //! Returns field ParentFaceSet
  Standard_EXPORT   Handle(StepShape_ConnectedFaceSet) ParentFaceSet()  const;
  
  //! Set field ParentFaceSet
  Standard_EXPORT   void SetParentFaceSet (const Handle(StepShape_ConnectedFaceSet)& ParentFaceSet) ;




  DEFINE_STANDARD_RTTI(StepShape_ConnectedFaceSubSet)

protected:




private: 


  Handle(StepShape_ConnectedFaceSet) theParentFaceSet;


};







#endif // _StepShape_ConnectedFaceSubSet_HeaderFile
