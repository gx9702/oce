// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_Array1OfApproval_HeaderFile
#define _StepBasic_Array1OfApproval_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_StepBasic_Approval_HeaderFile
#include <Handle_StepBasic_Approval.hxx>
#endif
class Standard_RangeError;
class Standard_DimensionMismatch;
class Standard_OutOfRange;
class Standard_OutOfMemory;
class StepBasic_Approval;



class StepBasic_Array1OfApproval  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   StepBasic_Array1OfApproval(const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT   StepBasic_Array1OfApproval(const Handle(StepBasic_Approval)& Item,const Standard_Integer Low,const Standard_Integer Up);
  
  Standard_EXPORT     void Init(const Handle(StepBasic_Approval)& V) ;
  
  Standard_EXPORT     void Destroy() ;
~StepBasic_Array1OfApproval()
{
  Destroy();
}
  
        Standard_Boolean IsAllocated() const;
  
  Standard_EXPORT    const StepBasic_Array1OfApproval& Assign(const StepBasic_Array1OfApproval& Other) ;
   const StepBasic_Array1OfApproval& operator =(const StepBasic_Array1OfApproval& Other) 
{
  return Assign(Other);
}
  
        Standard_Integer Length() const;
  
        Standard_Integer Lower() const;
  
        Standard_Integer Upper() const;
  
        void SetValue(const Standard_Integer Index,const Handle(StepBasic_Approval)& Value) ;
  
       const Handle_StepBasic_Approval& Value(const Standard_Integer Index) const;
     const Handle_StepBasic_Approval& operator ()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
        Handle_StepBasic_Approval& ChangeValue(const Standard_Integer Index) ;
      Handle_StepBasic_Approval& operator ()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}





protected:





private:

  
  Standard_EXPORT   StepBasic_Array1OfApproval(const StepBasic_Array1OfApproval& AnArray);


Standard_Integer myLowerBound;
Standard_Integer myUpperBound;
Standard_Address myStart;
Standard_Boolean isAllocated;


};

#define Array1Item Handle_StepBasic_Approval
#define Array1Item_hxx <StepBasic_Approval.hxx>
#define TCollection_Array1 StepBasic_Array1OfApproval
#define TCollection_Array1_hxx <StepBasic_Array1OfApproval.hxx>

#include <TCollection_Array1.lxx>

#undef Array1Item
#undef Array1Item_hxx
#undef TCollection_Array1
#undef TCollection_Array1_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
