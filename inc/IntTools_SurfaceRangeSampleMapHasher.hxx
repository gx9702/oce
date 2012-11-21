// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IntTools_SurfaceRangeSampleMapHasher_HeaderFile
#define _IntTools_SurfaceRangeSampleMapHasher_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class IntTools_SurfaceRangeSample;



class IntTools_SurfaceRangeSampleMapHasher  {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns a HasCode value  for  the  Key <K>  in the <br>
//!          range 0..Upper. <br>
      static  Standard_Integer HashCode(const IntTools_SurfaceRangeSample& K,const Standard_Integer Upper) ;
  //! Returns True  when the two  keys are the same. Two <br>
//!          same  keys  must   have  the  same  hashcode,  the <br>
//!          contrary is not necessary. <br>
//! <br>
      static  Standard_Boolean IsEqual(const IntTools_SurfaceRangeSample& S1,const IntTools_SurfaceRangeSample& S2) ;





protected:





private:





};


#include <IntTools_SurfaceRangeSampleMapHasher.lxx>



// other Inline functions and methods (like "C++: function call" methods)


#endif
