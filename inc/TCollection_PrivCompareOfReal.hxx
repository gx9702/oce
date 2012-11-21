// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TCollection_PrivCompareOfReal_HeaderFile
#define _TCollection_PrivCompareOfReal_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Real_HeaderFile
#include <Standard_Real.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif



class TCollection_PrivCompareOfReal  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   virtual  Standard_Boolean IsLower(const Standard_Real& Left,const Standard_Real& Right) const;
  
  Standard_EXPORT   virtual  Standard_Boolean IsGreater(const Standard_Real& Left,const Standard_Real& Right) const;
  
  Standard_EXPORT   virtual  Standard_Boolean IsEqual(const Standard_Real& Left,const Standard_Real& Right) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
