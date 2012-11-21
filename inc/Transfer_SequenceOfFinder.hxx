// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Transfer_SequenceOfFinder_HeaderFile
#define _Transfer_SequenceOfFinder_HeaderFile

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
#ifndef _Handle_Transfer_Finder_HeaderFile
#include <Handle_Transfer_Finder.hxx>
#endif
#ifndef _Handle_Transfer_SequenceNodeOfSequenceOfFinder_HeaderFile
#include <Handle_Transfer_SequenceNodeOfSequenceOfFinder.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Transfer_Finder;
class Transfer_SequenceNodeOfSequenceOfFinder;



class Transfer_SequenceOfFinder  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      Transfer_SequenceOfFinder();
  
  Standard_EXPORT     void Clear() ;
~Transfer_SequenceOfFinder()
{
  Clear();
}
  
  Standard_EXPORT    const Transfer_SequenceOfFinder& Assign(const Transfer_SequenceOfFinder& Other) ;
   const Transfer_SequenceOfFinder& operator =(const Transfer_SequenceOfFinder& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(Transfer_Finder)& T) ;
  
        void Append(Transfer_SequenceOfFinder& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(Transfer_Finder)& T) ;
  
        void Prepend(Transfer_SequenceOfFinder& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(Transfer_Finder)& T) ;
  
        void InsertBefore(const Standard_Integer Index,Transfer_SequenceOfFinder& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(Transfer_Finder)& T) ;
  
        void InsertAfter(const Standard_Integer Index,Transfer_SequenceOfFinder& S) ;
  
  Standard_EXPORT    const Handle_Transfer_Finder& First() const;
  
  Standard_EXPORT    const Handle_Transfer_Finder& Last() const;
  
        void Split(const Standard_Integer Index,Transfer_SequenceOfFinder& Sub) ;
  
  Standard_EXPORT    const Handle_Transfer_Finder& Value(const Standard_Integer Index) const;
   const Handle_Transfer_Finder& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(Transfer_Finder)& I) ;
  
  Standard_EXPORT     Handle_Transfer_Finder& ChangeValue(const Standard_Integer Index) ;
    Handle_Transfer_Finder& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   Transfer_SequenceOfFinder(const Transfer_SequenceOfFinder& Other);




};

#define SeqItem Handle_Transfer_Finder
#define SeqItem_hxx <Transfer_Finder.hxx>
#define TCollection_SequenceNode Transfer_SequenceNodeOfSequenceOfFinder
#define TCollection_SequenceNode_hxx <Transfer_SequenceNodeOfSequenceOfFinder.hxx>
#define Handle_TCollection_SequenceNode Handle_Transfer_SequenceNodeOfSequenceOfFinder
#define TCollection_SequenceNode_Type_() Transfer_SequenceNodeOfSequenceOfFinder_Type_()
#define TCollection_Sequence Transfer_SequenceOfFinder
#define TCollection_Sequence_hxx <Transfer_SequenceOfFinder.hxx>

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
