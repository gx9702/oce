// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepElement_CurveElementSectionDerivedDefinitions_HeaderFile
#define _StepElement_CurveElementSectionDerivedDefinitions_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepElement_CurveElementSectionDerivedDefinitions.hxx>

#include <Standard_Real.hxx>
#include <Handle_StepElement_HArray1OfMeasureOrUnspecifiedValue.hxx>
#include <Handle_TColStd_HArray1OfReal.hxx>
#include <StepElement_MeasureOrUnspecifiedValue.hxx>
#include <StepElement_CurveElementSectionDefinition.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class StepElement_HArray1OfMeasureOrUnspecifiedValue;
class TColStd_HArray1OfReal;
class TCollection_HAsciiString;
class StepElement_MeasureOrUnspecifiedValue;


//! Representation of STEP entity CurveElementSectionDerivedDefinitions
class StepElement_CurveElementSectionDerivedDefinitions : public StepElement_CurveElementSectionDefinition
{

public:

  
  //! Empty constructor
  Standard_EXPORT StepElement_CurveElementSectionDerivedDefinitions();
  
  //! Initialize all fields (own and inherited)
  Standard_EXPORT   void Init (const Handle(TCollection_HAsciiString)& aCurveElementSectionDefinition_Description, const Standard_Real aCurveElementSectionDefinition_SectionAngle, const Standard_Real aCrossSectionalArea, const Handle(StepElement_HArray1OfMeasureOrUnspecifiedValue)& aShearArea, const Handle(TColStd_HArray1OfReal)& aSecondMomentOfArea, const Standard_Real aTorsionalConstant, const StepElement_MeasureOrUnspecifiedValue& aWarpingConstant, const Handle(StepElement_HArray1OfMeasureOrUnspecifiedValue)& aLocationOfCentroid, const Handle(StepElement_HArray1OfMeasureOrUnspecifiedValue)& aLocationOfShearCentre, const Handle(StepElement_HArray1OfMeasureOrUnspecifiedValue)& aLocationOfNonStructuralMass, const StepElement_MeasureOrUnspecifiedValue& aNonStructuralMass, const StepElement_MeasureOrUnspecifiedValue& aPolarMoment) ;
  
  //! Returns field CrossSectionalArea
  Standard_EXPORT   Standard_Real CrossSectionalArea()  const;
  
  //! Set field CrossSectionalArea
  Standard_EXPORT   void SetCrossSectionalArea (const Standard_Real CrossSectionalArea) ;
  
  //! Returns field ShearArea
  Standard_EXPORT   Handle(StepElement_HArray1OfMeasureOrUnspecifiedValue) ShearArea()  const;
  
  //! Set field ShearArea
  Standard_EXPORT   void SetShearArea (const Handle(StepElement_HArray1OfMeasureOrUnspecifiedValue)& ShearArea) ;
  
  //! Returns field SecondMomentOfArea
  Standard_EXPORT   Handle(TColStd_HArray1OfReal) SecondMomentOfArea()  const;
  
  //! Set field SecondMomentOfArea
  Standard_EXPORT   void SetSecondMomentOfArea (const Handle(TColStd_HArray1OfReal)& SecondMomentOfArea) ;
  
  //! Returns field TorsionalConstant
  Standard_EXPORT   Standard_Real TorsionalConstant()  const;
  
  //! Set field TorsionalConstant
  Standard_EXPORT   void SetTorsionalConstant (const Standard_Real TorsionalConstant) ;
  
  //! Returns field WarpingConstant
  Standard_EXPORT   StepElement_MeasureOrUnspecifiedValue WarpingConstant()  const;
  
  //! Set field WarpingConstant
  Standard_EXPORT   void SetWarpingConstant (const StepElement_MeasureOrUnspecifiedValue& WarpingConstant) ;
  
  //! Returns field LocationOfCentroid
  Standard_EXPORT   Handle(StepElement_HArray1OfMeasureOrUnspecifiedValue) LocationOfCentroid()  const;
  
  //! Set field LocationOfCentroid
  Standard_EXPORT   void SetLocationOfCentroid (const Handle(StepElement_HArray1OfMeasureOrUnspecifiedValue)& LocationOfCentroid) ;
  
  //! Returns field LocationOfShearCentre
  Standard_EXPORT   Handle(StepElement_HArray1OfMeasureOrUnspecifiedValue) LocationOfShearCentre()  const;
  
  //! Set field LocationOfShearCentre
  Standard_EXPORT   void SetLocationOfShearCentre (const Handle(StepElement_HArray1OfMeasureOrUnspecifiedValue)& LocationOfShearCentre) ;
  
  //! Returns field LocationOfNonStructuralMass
  Standard_EXPORT   Handle(StepElement_HArray1OfMeasureOrUnspecifiedValue) LocationOfNonStructuralMass()  const;
  
  //! Set field LocationOfNonStructuralMass
  Standard_EXPORT   void SetLocationOfNonStructuralMass (const Handle(StepElement_HArray1OfMeasureOrUnspecifiedValue)& LocationOfNonStructuralMass) ;
  
  //! Returns field NonStructuralMass
  Standard_EXPORT   StepElement_MeasureOrUnspecifiedValue NonStructuralMass()  const;
  
  //! Set field NonStructuralMass
  Standard_EXPORT   void SetNonStructuralMass (const StepElement_MeasureOrUnspecifiedValue& NonStructuralMass) ;
  
  //! Returns field PolarMoment
  Standard_EXPORT   StepElement_MeasureOrUnspecifiedValue PolarMoment()  const;
  
  //! Set field PolarMoment
  Standard_EXPORT   void SetPolarMoment (const StepElement_MeasureOrUnspecifiedValue& PolarMoment) ;




  DEFINE_STANDARD_RTTI(StepElement_CurveElementSectionDerivedDefinitions)

protected:




private: 


  Standard_Real theCrossSectionalArea;
  Handle(StepElement_HArray1OfMeasureOrUnspecifiedValue) theShearArea;
  Handle(TColStd_HArray1OfReal) theSecondMomentOfArea;
  Standard_Real theTorsionalConstant;
  StepElement_MeasureOrUnspecifiedValue theWarpingConstant;
  Handle(StepElement_HArray1OfMeasureOrUnspecifiedValue) theLocationOfCentroid;
  Handle(StepElement_HArray1OfMeasureOrUnspecifiedValue) theLocationOfShearCentre;
  Handle(StepElement_HArray1OfMeasureOrUnspecifiedValue) theLocationOfNonStructuralMass;
  StepElement_MeasureOrUnspecifiedValue theNonStructuralMass;
  StepElement_MeasureOrUnspecifiedValue thePolarMoment;


};







#endif // _StepElement_CurveElementSectionDerivedDefinitions_HeaderFile
