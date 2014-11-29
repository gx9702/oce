// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ConversionBasedUnitAndTimeUnit_HeaderFile
#define _StepBasic_ConversionBasedUnitAndTimeUnit_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepBasic_ConversionBasedUnitAndTimeUnit.hxx>

#include <Handle_StepBasic_TimeUnit.hxx>
#include <StepBasic_ConversionBasedUnit.hxx>
#include <Handle_StepBasic_DimensionalExponents.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
#include <Handle_StepBasic_MeasureWithUnit.hxx>
class StepBasic_TimeUnit;
class StepBasic_DimensionalExponents;
class TCollection_HAsciiString;
class StepBasic_MeasureWithUnit;



class StepBasic_ConversionBasedUnitAndTimeUnit : public StepBasic_ConversionBasedUnit
{

public:

  
  //! Returns a ConversionBasedUnitAndTimeUnit
  Standard_EXPORT StepBasic_ConversionBasedUnitAndTimeUnit();
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_DimensionalExponents)& aDimensions) ;
  
  Standard_EXPORT virtual   void Init (const Handle(StepBasic_DimensionalExponents)& aDimensions, const Handle(TCollection_HAsciiString)& aName, const Handle(StepBasic_MeasureWithUnit)& aConversionFactor) ;
  
  Standard_EXPORT   void SetTimeUnit (const Handle(StepBasic_TimeUnit)& aTimeUnit) ;
  
  Standard_EXPORT   Handle(StepBasic_TimeUnit) TimeUnit()  const;




  DEFINE_STANDARD_RTTI(StepBasic_ConversionBasedUnitAndTimeUnit)

protected:




private: 


  Handle(StepBasic_TimeUnit) timeUnit;


};







#endif // _StepBasic_ConversionBasedUnitAndTimeUnit_HeaderFile
