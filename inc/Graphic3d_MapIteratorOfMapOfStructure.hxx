// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Graphic3d_MapIteratorOfMapOfStructure_HeaderFile
#define _Graphic3d_MapIteratorOfMapOfStructure_HeaderFile

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
#ifndef _Handle_Graphic3d_Structure_HeaderFile
#include <Handle_Graphic3d_Structure.hxx>
#endif
#ifndef _Handle_Graphic3d_StdMapNodeOfMapOfStructure_HeaderFile
#include <Handle_Graphic3d_StdMapNodeOfMapOfStructure.hxx>
#endif
class Standard_NoSuchObject;
class Graphic3d_Structure;
class TColStd_MapTransientHasher;
class Graphic3d_MapOfStructure;
class Graphic3d_StdMapNodeOfMapOfStructure;



class Graphic3d_MapIteratorOfMapOfStructure  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Graphic3d_MapIteratorOfMapOfStructure();
  
  Standard_EXPORT   Graphic3d_MapIteratorOfMapOfStructure(const Graphic3d_MapOfStructure& aMap);
  
  Standard_EXPORT     void Initialize(const Graphic3d_MapOfStructure& aMap) ;
  
  Standard_EXPORT    const Handle_Graphic3d_Structure& Key() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
