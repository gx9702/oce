// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDF_MapIteratorOfAttributeMap_HeaderFile
#define _TDF_MapIteratorOfAttributeMap_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BasicMapIterator_HeaderFile
#include <TCollection_BasicMapIterator.hxx>
#endif
#ifndef _Handle_TDF_Attribute_HeaderFile
#include <Handle_TDF_Attribute.hxx>
#endif
#ifndef _Handle_TDF_StdMapNodeOfAttributeMap_HeaderFile
#include <Handle_TDF_StdMapNodeOfAttributeMap.hxx>
#endif
class Standard_NoSuchObject;
class TDF_Attribute;
class TColStd_MapTransientHasher;
class TDF_AttributeMap;
class TDF_StdMapNodeOfAttributeMap;



class TDF_MapIteratorOfAttributeMap  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TDF_MapIteratorOfAttributeMap();
  
  Standard_EXPORT   TDF_MapIteratorOfAttributeMap(const TDF_AttributeMap& aMap);
  
  Standard_EXPORT     void Initialize(const TDF_AttributeMap& aMap) ;
  
  Standard_EXPORT    const Handle_TDF_Attribute& Key() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
