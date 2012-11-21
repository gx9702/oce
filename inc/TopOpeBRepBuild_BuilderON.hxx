// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TopOpeBRepBuild_BuilderON_HeaderFile
#define _TopOpeBRepBuild_BuilderON_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TopOpeBRepBuild_PBuilder_HeaderFile
#include <TopOpeBRepBuild_PBuilder.hxx>
#endif
#ifndef _TopOpeBRepBuild_PGTopo_HeaderFile
#include <TopOpeBRepBuild_PGTopo.hxx>
#endif
#ifndef _TopOpeBRepTool_Plos_HeaderFile
#include <TopOpeBRepTool_Plos.hxx>
#endif
#ifndef _TopOpeBRepBuild_PWireEdgeSet_HeaderFile
#include <TopOpeBRepBuild_PWireEdgeSet.hxx>
#endif
#ifndef _TopoDS_Shape_HeaderFile
#include <TopoDS_Shape.hxx>
#endif
#ifndef _TopOpeBRepDS_ListOfInterference_HeaderFile
#include <TopOpeBRepDS_ListOfInterference.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
#ifndef _Handle_TopOpeBRepDS_Interference_HeaderFile
#include <Handle_TopOpeBRepDS_Interference.hxx>
#endif
class TopoDS_Shape;
class TopOpeBRepDS_Interference;



class TopOpeBRepBuild_BuilderON  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   TopOpeBRepBuild_BuilderON();
  
  Standard_EXPORT   TopOpeBRepBuild_BuilderON(const TopOpeBRepBuild_PBuilder& PB,const TopoDS_Shape& F,const TopOpeBRepBuild_PGTopo& PG,const TopOpeBRepTool_Plos& PLSclass,const TopOpeBRepBuild_PWireEdgeSet& PWES);
  
  Standard_EXPORT     void Perform(const TopOpeBRepBuild_PBuilder& PB,const TopoDS_Shape& F,const TopOpeBRepBuild_PGTopo& PG,const TopOpeBRepTool_Plos& PLSclass,const TopOpeBRepBuild_PWireEdgeSet& PWES) ;
  
  Standard_EXPORT     Standard_Boolean GFillONCheckI(const Handle(TopOpeBRepDS_Interference)& I) const;
  
  Standard_EXPORT     void GFillONPartsWES1(const Handle(TopOpeBRepDS_Interference)& I) ;
  
  Standard_EXPORT     void GFillONPartsWES2(const Handle(TopOpeBRepDS_Interference)& I,const TopoDS_Shape& EspON) ;
  
  Standard_EXPORT     void Perform2d(const TopOpeBRepBuild_PBuilder& PB,const TopoDS_Shape& F,const TopOpeBRepBuild_PGTopo& PG,const TopOpeBRepTool_Plos& PLSclass,const TopOpeBRepBuild_PWireEdgeSet& PWES) ;
  
  Standard_EXPORT     void GFillONParts2dWES2(const Handle(TopOpeBRepDS_Interference)& I,const TopoDS_Shape& EspON) ;





protected:





private:



TopOpeBRepBuild_PBuilder myPB;
TopOpeBRepBuild_PGTopo myPG;
TopOpeBRepTool_Plos myPLSclass;
TopOpeBRepBuild_PWireEdgeSet myPWES;
TopoDS_Shape myFace;
TopOpeBRepDS_ListOfInterference myFEI;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif
