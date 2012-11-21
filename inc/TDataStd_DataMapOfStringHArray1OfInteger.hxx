// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDataStd_DataMapOfStringHArray1OfInteger_HeaderFile
#define _TDataStd_DataMapOfStringHArray1OfInteger_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMap_HeaderFile
#include <TCollection_BasicMap.hxx>
#endif
#ifndef _Handle_TColStd_HArray1OfInteger_HeaderFile
#include <Handle_TColStd_HArray1OfInteger.hxx>
#endif
#ifndef _Handle_TDataStd_DataMapNodeOfDataMapOfStringHArray1OfInteger_HeaderFile
#include <Handle_TDataStd_DataMapNodeOfDataMapOfStringHArray1OfInteger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
class Standard_DomainError;
class Standard_NoSuchObject;
class TCollection_ExtendedString;
class TColStd_HArray1OfInteger;
class TDataStd_DataMapNodeOfDataMapOfStringHArray1OfInteger;
class TDataStd_DataMapIteratorOfDataMapOfStringHArray1OfInteger;



class TDataStd_DataMapOfStringHArray1OfInteger  : public TCollection_BasicMap {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TDataStd_DataMapOfStringHArray1OfInteger(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT     TDataStd_DataMapOfStringHArray1OfInteger& Assign(const TDataStd_DataMapOfStringHArray1OfInteger& Other) ;
    TDataStd_DataMapOfStringHArray1OfInteger& operator =(const TDataStd_DataMapOfStringHArray1OfInteger& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void ReSize(const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT     void Clear() ;
~TDataStd_DataMapOfStringHArray1OfInteger()
{
  Clear();
}
  
  Standard_EXPORT     Standard_Boolean Bind(const TCollection_ExtendedString& K,const Handle(TColStd_HArray1OfInteger)& I) ;
  
  Standard_EXPORT     Standard_Boolean IsBound(const TCollection_ExtendedString& K) const;
  
  Standard_EXPORT     Standard_Boolean UnBind(const TCollection_ExtendedString& K) ;
  
  Standard_EXPORT    const Handle_TColStd_HArray1OfInteger& Find(const TCollection_ExtendedString& K) const;
   const Handle_TColStd_HArray1OfInteger& operator()(const TCollection_ExtendedString& K) const
{
  return Find(K);
}
  
  Standard_EXPORT     Handle_TColStd_HArray1OfInteger& ChangeFind(const TCollection_ExtendedString& K) ;
    Handle_TColStd_HArray1OfInteger& operator()(const TCollection_ExtendedString& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT     Standard_Address Find1(const TCollection_ExtendedString& K) const;
  
  Standard_EXPORT     Standard_Address ChangeFind1(const TCollection_ExtendedString& K) ;





protected:





private:

  
  Standard_EXPORT   TDataStd_DataMapOfStringHArray1OfInteger(const TDataStd_DataMapOfStringHArray1OfInteger& Other);




};





// other Inline functions and methods (like "C++: function call" methods)


#endif
