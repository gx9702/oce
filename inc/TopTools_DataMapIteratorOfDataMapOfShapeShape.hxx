// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopTools_DataMapIteratorOfDataMapOfShapeShape_HeaderFile
#define _TopTools_DataMapIteratorOfDataMapOfShapeShape_HeaderFile

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
#ifndef _Handle_TopTools_DataMapNodeOfDataMapOfShapeShape_HeaderFile
#include <Handle_TopTools_DataMapNodeOfDataMapOfShapeShape.hxx>
#endif
class Standard_NoSuchObject;
class TopoDS_Shape;
class TopTools_ShapeMapHasher;
class TopTools_DataMapOfShapeShape;
class TopTools_DataMapNodeOfDataMapOfShapeShape;



class TopTools_DataMapIteratorOfDataMapOfShapeShape  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopTools_DataMapIteratorOfDataMapOfShapeShape();
  
  Standard_EXPORT   TopTools_DataMapIteratorOfDataMapOfShapeShape(const TopTools_DataMapOfShapeShape& aMap);
  
  Standard_EXPORT     void Initialize(const TopTools_DataMapOfShapeShape& aMap) ;
  
  Standard_EXPORT    const TopoDS_Shape& Key() const;
  
  Standard_EXPORT    const TopoDS_Shape& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
