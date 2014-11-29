// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepShape_VertexPoint_HeaderFile
#define _StepShape_VertexPoint_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_StepShape_VertexPoint.hxx>

#include <Handle_StepGeom_Point.hxx>
#include <StepShape_Vertex.hxx>
#include <Handle_TCollection_HAsciiString.hxx>
class StepGeom_Point;
class TCollection_HAsciiString;



class StepShape_VertexPoint : public StepShape_Vertex
{

public:

  
  //! Returns a VertexPoint
  Standard_EXPORT StepShape_VertexPoint();
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName) ;
  
  Standard_EXPORT virtual   void Init (const Handle(TCollection_HAsciiString)& aName, const Handle(StepGeom_Point)& aVertexGeometry) ;
  
  Standard_EXPORT   void SetVertexGeometry (const Handle(StepGeom_Point)& aVertexGeometry) ;
  
  Standard_EXPORT   Handle(StepGeom_Point) VertexGeometry()  const;




  DEFINE_STANDARD_RTTI(StepShape_VertexPoint)

protected:




private: 


  Handle(StepGeom_Point) vertexGeometry;


};







#endif // _StepShape_VertexPoint_HeaderFile
