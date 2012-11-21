// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Draw_DataMapIteratorOfMapOfFunctions_HeaderFile
#define _Draw_DataMapIteratorOfMapOfFunctions_HeaderFile

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
#ifndef _OSD_Function_HeaderFile
#include <OSD_Function.hxx>
#endif
#ifndef _Handle_Draw_DataMapNodeOfMapOfFunctions_HeaderFile
#include <Handle_Draw_DataMapNodeOfMapOfFunctions.hxx>
#endif
class Standard_NoSuchObject;
class TCollection_AsciiString;
class Draw_MapOfFunctions;
class Draw_DataMapNodeOfMapOfFunctions;



class Draw_DataMapIteratorOfMapOfFunctions  : public TCollection_BasicMapIterator {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   Draw_DataMapIteratorOfMapOfFunctions();
  
  Standard_EXPORT   Draw_DataMapIteratorOfMapOfFunctions(const Draw_MapOfFunctions& aMap);
  
  Standard_EXPORT     void Initialize(const Draw_MapOfFunctions& aMap) ;
  
  Standard_EXPORT    const TCollection_AsciiString& Key() const;
  
  Standard_EXPORT    const OSD_Function& Value() const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
