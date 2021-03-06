// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger_HeaderFile
#define _MAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMapIterator.hxx>
#include <Handle_MAT2d_DataMapNodeOfDataMapOfBiIntSequenceOfInteger.hxx>
class Standard_NoSuchObject;
class MAT2d_BiInt;
class TColStd_SequenceOfInteger;
class MAT2d_MapBiIntHasher;
class MAT2d_DataMapOfBiIntSequenceOfInteger;
class MAT2d_DataMapNodeOfDataMapOfBiIntSequenceOfInteger;



class MAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger  : public TCollection_BasicMapIterator
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger();
  
  Standard_EXPORT MAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger(const MAT2d_DataMapOfBiIntSequenceOfInteger& aMap);
  
  Standard_EXPORT   void Initialize (const MAT2d_DataMapOfBiIntSequenceOfInteger& aMap) ;
  
  Standard_EXPORT  const  MAT2d_BiInt& Key()  const;
  
  Standard_EXPORT  const  TColStd_SequenceOfInteger& Value()  const;




protected:





private:





};







#endif // _MAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger_HeaderFile
