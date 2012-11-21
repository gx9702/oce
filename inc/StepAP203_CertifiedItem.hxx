// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepAP203_CertifiedItem_HeaderFile
#define _StepAP203_CertifiedItem_HeaderFile

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
#ifndef _Handle_StepRepr_SuppliedPartRelationship_HeaderFile
#include <Handle_StepRepr_SuppliedPartRelationship.hxx>
#endif
class Standard_Transient;
class StepRepr_SuppliedPartRelationship;


//! Representation of STEP SELECT type CertifiedItem <br>
class StepAP203_CertifiedItem  : public StepData_SelectType {
public:

  DEFINE_STANDARD_ALLOC

  //! Empty constructor <br>
  Standard_EXPORT   StepAP203_CertifiedItem();
  //! Recognizes a kind of CertifiedItem select type <br>
//!          1 -> SuppliedPartRelationship from StepRepr <br>
//!          0 else <br>
  Standard_EXPORT     Standard_Integer CaseNum(const Handle(Standard_Transient)& ent) const;
  //! Returns Value as SuppliedPartRelationship (or Null if another type) <br>
  Standard_EXPORT     Handle_StepRepr_SuppliedPartRelationship SuppliedPartRelationship() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
