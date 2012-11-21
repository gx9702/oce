// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColGeom_SequenceOfBoundedCurve_HeaderFile
#define _TColGeom_SequenceOfBoundedCurve_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _TCollection_BaseSequence_HeaderFile
#include <TCollection_BaseSequence.hxx>
#endif
#ifndef _Handle_Geom_BoundedCurve_HeaderFile
#include <Handle_Geom_BoundedCurve.hxx>
#endif
#ifndef _Handle_TColGeom_SequenceNodeOfSequenceOfBoundedCurve_HeaderFile
#include <Handle_TColGeom_SequenceNodeOfSequenceOfBoundedCurve.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Geom_BoundedCurve;
class TColGeom_SequenceNodeOfSequenceOfBoundedCurve;



class TColGeom_SequenceOfBoundedCurve  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      TColGeom_SequenceOfBoundedCurve();
  
  Standard_EXPORT     void Clear() ;
~TColGeom_SequenceOfBoundedCurve()
{
  Clear();
}
  
  Standard_EXPORT    const TColGeom_SequenceOfBoundedCurve& Assign(const TColGeom_SequenceOfBoundedCurve& Other) ;
   const TColGeom_SequenceOfBoundedCurve& operator =(const TColGeom_SequenceOfBoundedCurve& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(Geom_BoundedCurve)& T) ;
  
        void Append(TColGeom_SequenceOfBoundedCurve& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(Geom_BoundedCurve)& T) ;
  
        void Prepend(TColGeom_SequenceOfBoundedCurve& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(Geom_BoundedCurve)& T) ;
  
        void InsertBefore(const Standard_Integer Index,TColGeom_SequenceOfBoundedCurve& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(Geom_BoundedCurve)& T) ;
  
        void InsertAfter(const Standard_Integer Index,TColGeom_SequenceOfBoundedCurve& S) ;
  
  Standard_EXPORT    const Handle_Geom_BoundedCurve& First() const;
  
  Standard_EXPORT    const Handle_Geom_BoundedCurve& Last() const;
  
        void Split(const Standard_Integer Index,TColGeom_SequenceOfBoundedCurve& Sub) ;
  
  Standard_EXPORT    const Handle_Geom_BoundedCurve& Value(const Standard_Integer Index) const;
   const Handle_Geom_BoundedCurve& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(Geom_BoundedCurve)& I) ;
  
  Standard_EXPORT     Handle_Geom_BoundedCurve& ChangeValue(const Standard_Integer Index) ;
    Handle_Geom_BoundedCurve& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   TColGeom_SequenceOfBoundedCurve(const TColGeom_SequenceOfBoundedCurve& Other);




};

#define SeqItem Handle_Geom_BoundedCurve
#define SeqItem_hxx <Geom_BoundedCurve.hxx>
#define TCollection_SequenceNode TColGeom_SequenceNodeOfSequenceOfBoundedCurve
#define TCollection_SequenceNode_hxx <TColGeom_SequenceNodeOfSequenceOfBoundedCurve.hxx>
#define Handle_TCollection_SequenceNode Handle_TColGeom_SequenceNodeOfSequenceOfBoundedCurve
#define TCollection_SequenceNode_Type_() TColGeom_SequenceNodeOfSequenceOfBoundedCurve_Type_()
#define TCollection_Sequence TColGeom_SequenceOfBoundedCurve
#define TCollection_Sequence_hxx <TColGeom_SequenceOfBoundedCurve.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
