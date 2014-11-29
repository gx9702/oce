// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MAT2d_BiInt_HeaderFile
#define _MAT2d_BiInt_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Standard_Integer.hxx>
#include <Standard_Boolean.hxx>


//! BiInt is a set of two integers.
class MAT2d_BiInt 
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MAT2d_BiInt(const Standard_Integer I1, const Standard_Integer I2);
  
  Standard_EXPORT   Standard_Integer FirstIndex()  const;
  
  Standard_EXPORT   Standard_Integer SecondIndex()  const;
  
  Standard_EXPORT   void FirstIndex (const Standard_Integer I1) ;
  
  Standard_EXPORT   void SecondIndex (const Standard_Integer I2) ;
  
  Standard_EXPORT   Standard_Boolean IsEqual (const MAT2d_BiInt& B)  const;
  Standard_Boolean operator == (const MAT2d_BiInt& B)  const
{
  return IsEqual(B);
}




protected:





private:



  Standard_Integer i1;
  Standard_Integer i2;


};







#endif // _MAT2d_BiInt_HeaderFile
