// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ViewerTest_Tool_HeaderFile
#define _ViewerTest_Tool_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_V3d_Viewer_HeaderFile
#include <Handle_V3d_Viewer.hxx>
#endif
#ifndef _Standard_CString_HeaderFile
#include <Standard_CString.hxx>
#endif
#ifndef _Handle_AIS_InteractiveContext_HeaderFile
#include <Handle_AIS_InteractiveContext.hxx>
#endif
class V3d_Viewer;
class AIS_InteractiveContext;


//! to build and initialize ViewerTest static variables. <br>
//!          ==================================================== <br>
class ViewerTest_Tool  {
public:

  DEFINE_STANDARD_ALLOC

  //! create a new <context>. ViewerTest variables are not initialized; <br>
  Standard_EXPORT   static  Handle_V3d_Viewer MakeViewer(const Standard_CString title) ;
  //! create a new <context>. ViewerTest variables are not initialized; <br>
  Standard_EXPORT   static  Handle_AIS_InteractiveContext MakeContext(const Standard_CString title) ;
  //! init variables of ViewerTest with <current> <br>
  Standard_EXPORT   static  void InitViewerTest(const Handle(AIS_InteractiveContext)& current) ;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
