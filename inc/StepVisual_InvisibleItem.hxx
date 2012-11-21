// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepVisual_InvisibleItem_HeaderFile
#define _StepVisual_InvisibleItem_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _StepData_SelectType_HeaderFile
#include <StepData_SelectType.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Standard_Transient_HeaderFile
#include <Handle_Standard_Transient.hxx>
#endif
#ifndef _Handle_StepVisual_StyledItem_HeaderFile
#include <Handle_StepVisual_StyledItem.hxx>
#endif
#ifndef _Handle_StepVisual_PresentationLayerAssignment_HeaderFile
#include <Handle_StepVisual_PresentationLayerAssignment.hxx>
#endif
#ifndef _Handle_StepVisual_PresentationRepresentation_HeaderFile
#include <Handle_StepVisual_PresentationRepresentation.hxx>
#endif
class Standard_Transient;
class StepVisual_StyledItem;
class StepVisual_PresentationLayerAssignment;
class StepVisual_PresentationRepresentation;



class StepVisual_InvisibleItem  : public StepData_SelectType {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns a InvisibleItem SelectType <br>
  Standard_EXPORT   StepVisual_InvisibleItem();
  //! Recognizes a InvisibleItem Kind Entity that is : <br>
//!        1 -> StyledItem <br>
//!        2 -> PresentationLayerAssignment <br>
//!        3 -> PresentationRepresentation <br>
//!        0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! returns Value as a StyledItem (Null if another type) <br>
  Standard_EXPORT     Handle_StepVisual_StyledItem StyledItem() const;
  //! returns Value as a PresentationLayerAssignment (Null if another type) <br>
  Standard_EXPORT     Handle_StepVisual_PresentationLayerAssignment PresentationLayerAssignment() const;
  //! returns Value as a PresentationRepresentation (Null if another type) <br>
  Standard_EXPORT     Handle_StepVisual_PresentationRepresentation PresentationRepresentation() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
