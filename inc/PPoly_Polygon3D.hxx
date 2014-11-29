// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _PPoly_Polygon3D_HeaderFile
#define _PPoly_Polygon3D_HeaderFile

#include <Standard_Macro.hxx>
#include <Standard_DefineHandle.hxx>
#include <Standard.hxx>
#include <Handle_PPoly_Polygon3D.hxx>

#include <Standard_Real.hxx>
#include <Standard_Integer.hxx>
#include <Handle_PColgp_HArray1OfPnt.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_PColStd_HArray1OfReal.hxx>
#include <Standard_Persistent.hxx>
class PColgp_HArray1OfPnt;
class PColStd_HArray1OfReal;


class PPoly_Polygon3D : public Standard_Persistent
{

public:

  
  //! Defaults with allocation of nodes.
  Standard_EXPORT PPoly_Polygon3D(const Handle(PColgp_HArray1OfPnt)& Nodes, const Standard_Real Defl);
  
  //! Defaults with allocation of nodes + Parameters
  Standard_EXPORT PPoly_Polygon3D(const Handle(PColgp_HArray1OfPnt)& Nodes, const Handle(PColStd_HArray1OfReal)& Parameters, const Standard_Real Defl);
  
  Standard_EXPORT   Standard_Real Deflection()  const;
  
  Standard_EXPORT   void Deflection (const Standard_Real Defl) ;
  
  Standard_EXPORT   Standard_Integer NbNodes()  const;
  
  Standard_EXPORT   Handle(PColgp_HArray1OfPnt) Nodes()  const;
  
  Standard_EXPORT   void Nodes (const Handle(PColgp_HArray1OfPnt)& Nodes) ;
  
  Standard_EXPORT   Standard_Boolean HasParameters()  const;
  
  //! Sets the value of myParameters
  Standard_EXPORT   void Parameters (const Handle(PColStd_HArray1OfReal)& Parameters) ;
  
  //! Reference on the parameters values.
  Standard_EXPORT   Handle(PColStd_HArray1OfReal) Parameters()  const;

PPoly_Polygon3D( )
{
  
}
PPoly_Polygon3D(const Storage_stCONSTclCOM& a) : Standard_Persistent(a)
{
  
}
    Standard_Real _CSFDB_GetPPoly_Polygon3DmyDeflection() const { return myDeflection; }
    void _CSFDB_SetPPoly_Polygon3DmyDeflection(const Standard_Real p) { myDeflection = p; }
    Handle(PColgp_HArray1OfPnt) _CSFDB_GetPPoly_Polygon3DmyNodes() const { return myNodes; }
    void _CSFDB_SetPPoly_Polygon3DmyNodes(const Handle(PColgp_HArray1OfPnt)& p) { myNodes = p; }
    Handle(PColStd_HArray1OfReal) _CSFDB_GetPPoly_Polygon3DmyParameters() const { return myParameters; }
    void _CSFDB_SetPPoly_Polygon3DmyParameters(const Handle(PColStd_HArray1OfReal)& p) { myParameters = p; }



  DEFINE_STANDARD_RTTI(PPoly_Polygon3D)

protected:




private: 


  Standard_Real myDeflection;
  Handle(PColgp_HArray1OfPnt) myNodes;
  Handle(PColStd_HArray1OfReal) myParameters;


};







#endif // _PPoly_Polygon3D_HeaderFile
