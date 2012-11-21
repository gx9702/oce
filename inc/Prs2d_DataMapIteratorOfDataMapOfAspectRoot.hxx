// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Prs2d_DataMapIteratorOfDataMapOfAspectRoot_HeaderFile
#define _Prs2d_DataMapIteratorOfDataMapOfAspectRoot_HeaderFile

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
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Handle_Prs2d_AspectRoot_HeaderFile
#include <Handle_Prs2d_AspectRoot.hxx>
#endif
#ifndef _Handle_Prs2d_DataMapNodeOfDataMapOfAspectRoot_HeaderFile
#include <Handle_Prs2d_DataMapNodeOfDataMapOfAspectRoot.hxx>
#endif
class Standard_NoSuchObject;
class Prs2d_AspectRoot;
class TColStd_MapIntegerHasher;
class Prs2d_DataMapOfAspectRoot;
class Prs2d_DataMapNodeOfDataMapOfAspectRoot;



class Prs2d_DataMapIteratorOfDataMapOfAspectRoot  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Prs2d_DataMapIteratorOfDataMapOfAspectRoot();
  
  Standard_EXPORT   Prs2d_DataMapIteratorOfDataMapOfAspectRoot(const Prs2d_DataMapOfAspectRoot& aMap);
  
  Standard_EXPORT     void Initialize(const Prs2d_DataMapOfAspectRoot& aMap) ;
  
  Standard_EXPORT    const Standard_Integer& Key() const;
  
  Standard_EXPORT    const Handle_Prs2d_AspectRoot& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
