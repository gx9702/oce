// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _STEPCAFControl_DataMapNodeOfDataMapOfPDExternFile_HeaderFile
#define _STEPCAFControl_DataMapNodeOfDataMapOfPDExternFile_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_STEPCAFControl_DataMapNodeOfDataMapOfPDExternFile.hxx>

#include <Handle_StepBasic_ProductDefinition.hxx>
#include <Handle_STEPCAFControl_ExternFile.hxx>
#include <TCollection_MapNode.hxx>
#include <TCollection_MapNodePtr.hxx>
class StepBasic_ProductDefinition;
class STEPCAFControl_ExternFile;
class TColStd_MapTransientHasher;
class STEPCAFControl_DataMapOfPDExternFile;
class STEPCAFControl_DataMapIteratorOfDataMapOfPDExternFile;



class STEPCAFControl_DataMapNodeOfDataMapOfPDExternFile : public TCollection_MapNode
{

public:

  
    STEPCAFControl_DataMapNodeOfDataMapOfPDExternFile(const Handle(StepBasic_ProductDefinition)& K, const Handle(STEPCAFControl_ExternFile)& I, const TCollection_MapNodePtr& n);
  
      Handle(StepBasic_ProductDefinition)& Key()  const;
  
      Handle(STEPCAFControl_ExternFile)& Value()  const;




  DEFINE_STANDARD_RTTI(STEPCAFControl_DataMapNodeOfDataMapOfPDExternFile)

protected:




private: 


  Handle(StepBasic_ProductDefinition) myKey;
  Handle(STEPCAFControl_ExternFile) myValue;


};

#define TheKey Handle(StepBasic_ProductDefinition)
#define TheKey_hxx <StepBasic_ProductDefinition.hxx>
#define TheItem Handle(STEPCAFControl_ExternFile)
#define TheItem_hxx <STEPCAFControl_ExternFile.hxx>
#define Hasher TColStd_MapTransientHasher
#define Hasher_hxx <TColStd_MapTransientHasher.hxx>
#define TCollection_DataMapNode STEPCAFControl_DataMapNodeOfDataMapOfPDExternFile
#define TCollection_DataMapNode_hxx <STEPCAFControl_DataMapNodeOfDataMapOfPDExternFile.hxx>
#define TCollection_DataMapIterator STEPCAFControl_DataMapIteratorOfDataMapOfPDExternFile
#define TCollection_DataMapIterator_hxx <STEPCAFControl_DataMapIteratorOfDataMapOfPDExternFile.hxx>
#define Handle_TCollection_DataMapNode Handle_STEPCAFControl_DataMapNodeOfDataMapOfPDExternFile
#define TCollection_DataMapNode_Type_() STEPCAFControl_DataMapNodeOfDataMapOfPDExternFile_Type_()
#define TCollection_DataMap STEPCAFControl_DataMapOfPDExternFile
#define TCollection_DataMap_hxx <STEPCAFControl_DataMapOfPDExternFile.hxx>

#include <TCollection_DataMapNode.lxx>

#undef TheKey
#undef TheKey_hxx
#undef TheItem
#undef TheItem_hxx
#undef Hasher
#undef Hasher_hxx
#undef TCollection_DataMapNode
#undef TCollection_DataMapNode_hxx
#undef TCollection_DataMapIterator
#undef TCollection_DataMapIterator_hxx
#undef Handle_TCollection_DataMapNode
#undef TCollection_DataMapNode_Type_
#undef TCollection_DataMap
#undef TCollection_DataMap_hxx




#endif // _STEPCAFControl_DataMapNodeOfDataMapOfPDExternFile_HeaderFile
