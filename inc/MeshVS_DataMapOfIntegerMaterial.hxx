// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _MeshVS_DataMapOfIntegerMaterial_HeaderFile
#define _MeshVS_DataMapOfIntegerMaterial_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BasicMap.hxx>
#include <Standard_Integer.hxx>
#include <Handle_MeshVS_DataMapNodeOfDataMapOfIntegerMaterial.hxx>
#include <Standard_Boolean.hxx>
#include <Standard_Address.hxx>
class Standard_DomainError;
class Standard_NoSuchObject;
class Graphic3d_MaterialAspect;
class TColStd_MapIntegerHasher;
class MeshVS_DataMapNodeOfDataMapOfIntegerMaterial;
class MeshVS_DataMapIteratorOfDataMapOfIntegerMaterial;



class MeshVS_DataMapOfIntegerMaterial  : public TCollection_BasicMap
{
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT MeshVS_DataMapOfIntegerMaterial(const Standard_Integer NbBuckets = 1);
  
  Standard_EXPORT   MeshVS_DataMapOfIntegerMaterial& Assign (const MeshVS_DataMapOfIntegerMaterial& Other) ;
  MeshVS_DataMapOfIntegerMaterial& operator = (const MeshVS_DataMapOfIntegerMaterial& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void ReSize (const Standard_Integer NbBuckets) ;
  
  Standard_EXPORT   void Clear() ;
~MeshVS_DataMapOfIntegerMaterial()
{
  Clear();
}
  
  Standard_EXPORT   Standard_Boolean Bind (const Standard_Integer& K, const Graphic3d_MaterialAspect& I) ;
  
  Standard_EXPORT   Standard_Boolean IsBound (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Boolean UnBind (const Standard_Integer& K) ;
  
  Standard_EXPORT  const  Graphic3d_MaterialAspect& Find (const Standard_Integer& K)  const;
 const  Graphic3d_MaterialAspect& operator() (const Standard_Integer& K)  const
{
  return Find(K);
}
  
  Standard_EXPORT   Graphic3d_MaterialAspect& ChangeFind (const Standard_Integer& K) ;
  Graphic3d_MaterialAspect& operator() (const Standard_Integer& K) 
{
  return ChangeFind(K);
}
  
  Standard_EXPORT   Standard_Address Find1 (const Standard_Integer& K)  const;
  
  Standard_EXPORT   Standard_Address ChangeFind1 (const Standard_Integer& K) ;




protected:





private:

  
  Standard_EXPORT MeshVS_DataMapOfIntegerMaterial(const MeshVS_DataMapOfIntegerMaterial& Other);




};







#endif // _MeshVS_DataMapOfIntegerMaterial_HeaderFile
