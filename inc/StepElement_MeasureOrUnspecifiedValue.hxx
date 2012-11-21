// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_MeasureOrUnspecifiedValue_HeaderFile
#define _StepElement_MeasureOrUnspecifiedValue_HeaderFile

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
#ifndef _Handle_StepData_SelectMember_HeaderFile
#include <Handle_StepData_SelectMember.hxx>
#endif
#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _StepElement_UnspecifiedValue_HeaderFile
#include <StepElement_UnspecifiedValue.hxx>
#endif
class Standard_Transient;
class StepData_SelectMember;


//! Representation of STEP SELECT type MeasureOrUnspecifiedValue <br>
class StepElement_MeasureOrUnspecifiedValue  : public StepData_SelectType {
public:

  DEFINE_STANDARD_ALLOC

  //! Empty constructor <br>
  Standard_EXPORT   StepElement_MeasureOrUnspecifiedValue();
  //! Recognizes a kind of MeasureOrUnspecifiedValue select type <br>
//!          return 0 <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! Recognizes a items of select member MeasureOrUnspecifiedValueMember <br>
//!          1 -> ContextDependentMeasure <br>
//!          2 -> UnspecifiedValue <br>
//!          0 else <br>
  Standard_EXPORT   virtual  Standard_Integer CaseMem(const Handle(StepData_SelectMember)& ent) const;
  //! Returns a new select member the type MeasureOrUnspecifiedValueMember <br>
  Standard_EXPORT   virtual  Handle_StepData_SelectMember NewMember() const;
  //! Set Value for ContextDependentMeasure <br>
  Standard_EXPORT     void SetContextDependentMeasure(const Standard_Real aVal) ;
  //! Returns Value as ContextDependentMeasure (or Null if another type) <br>
  Standard_EXPORT     Standard_Real ContextDependentMeasure() const;
  //! Set Value for UnspecifiedValue <br>
  Standard_EXPORT     void SetUnspecifiedValue(const StepElement_UnspecifiedValue aVal) ;
  //! Returns Value as UnspecifiedValue (or Null if another type) <br>
  Standard_EXPORT     StepElement_UnspecifiedValue UnspecifiedValue() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
