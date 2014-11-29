// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopoDS_TShell_HeaderFile
#define _TopoDS_TShell_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_TopoDS_TShell.hxx>

#include <TopoDS_TShape.hxx>
#include <TopAbs_ShapeEnum.hxx>
#include <Handle_TopoDS_TShape.hxx>
class TopoDS_TShape;


//! A set of faces connected by their edges.
class TopoDS_TShell : public TopoDS_TShape
{

public:

  
  //! Creates an empty TShell.
    TopoDS_TShell();
  
  //! Returns SHELL.
  Standard_EXPORT   TopAbs_ShapeEnum ShapeType()  const;
  
  //! Returns an empty TShell.
  Standard_EXPORT   Handle(TopoDS_TShape) EmptyCopy()  const;




  DEFINE_STANDARD_RTTI(TopoDS_TShell)

protected:




private: 




};


#include <TopoDS_TShell.lxx>





#endif // _TopoDS_TShell_HeaderFile
