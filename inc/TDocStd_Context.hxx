// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TDocStd_Context_HeaderFile
#define _TDocStd_Context_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif



class TDocStd_Context  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TDocStd_Context();
  
  Standard_EXPORT     void SetModifiedReferences(const Standard_Boolean Mod) ;
  
  Standard_EXPORT     Standard_Boolean ModifiedReferences() const;





protected:





private:



Standard_Boolean modifiedRef;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
