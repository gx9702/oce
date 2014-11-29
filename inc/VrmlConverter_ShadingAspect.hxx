// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _VrmlConverter_ShadingAspect_HeaderFile
#define _VrmlConverter_ShadingAspect_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineHandle.hxx>
#include <Handle_VrmlConverter_ShadingAspect.hxx>

#include <Handle_Vrml_Material.hxx>
#include <Vrml_ShapeHints.hxx>
#include <Standard_Boolean.hxx>
#include <MMgt_TShared.hxx>
class Vrml_Material;
class Vrml_ShapeHints;


//! qualifies the aspect properties for
//! the VRML conversation of ShadedShape .
class VrmlConverter_ShadingAspect : public MMgt_TShared
{

public:

  
  //! create a default ShadingAspect.
  Standard_EXPORT VrmlConverter_ShadingAspect();
  
  Standard_EXPORT   void SetFrontMaterial (const Handle(Vrml_Material)& aMaterial) ;
  
  Standard_EXPORT   Handle(Vrml_Material) FrontMaterial()  const;
  
  Standard_EXPORT   void SetShapeHints (const Vrml_ShapeHints& aShapeHints) ;
  
  Standard_EXPORT   Vrml_ShapeHints ShapeHints()  const;
  
  //! defines necessary of  a  calculation  of  normals for  ShadedShape  to  more
  //! accurately  display  curved  surfaces,  pacticularly  when  smoooth  or  phong
  //! shading  is  used  in  VRML  viewer.
  //! By default False  -  the normals are not calculated,
  //! True  -  the normals are calculated.
  //! Warning: If  normals  are  calculated  the  resulting  VRML  file  will
  //! be  substantially  lager.
  Standard_EXPORT   void SetHasNormals (const Standard_Boolean OnOff) ;
  
  //! returns True if the normals are calculating
  Standard_EXPORT   Standard_Boolean HasNormals()  const;
  
  //! defines necessary of writing  Material from Vrml into  output  OStream.
  //! By default False  -  the material is not writing into OStream,
  //! True  -  the material is writing.
  Standard_EXPORT   void SetHasMaterial (const Standard_Boolean OnOff) ;
  
  //! returns True if the  materials is  writing into OStream.
  Standard_EXPORT   Standard_Boolean HasMaterial()  const;




  DEFINE_STANDARD_RTTI(VrmlConverter_ShadingAspect)

protected:




private: 


  Handle(Vrml_Material) myFrontMaterial;
  Vrml_ShapeHints myShapeHints;
  Standard_Boolean myHasNormals;
  Standard_Boolean myHasMaterial;


};







#endif // _VrmlConverter_ShadingAspect_HeaderFile
