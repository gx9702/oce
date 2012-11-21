// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColgp_SequenceOfXY_HeaderFile
#define _TColgp_SequenceOfXY_HeaderFile

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
#ifndef _Handle_TColgp_SequenceNodeOfSequenceOfXY_HeaderFile
#include <Handle_TColgp_SequenceNodeOfSequenceOfXY.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class gp_XY;
class TColgp_SequenceNodeOfSequenceOfXY;



class TColgp_SequenceOfXY  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      TColgp_SequenceOfXY();
  
  Standard_EXPORT     void Clear() ;
~TColgp_SequenceOfXY()
{
  Clear();
}
  
  Standard_EXPORT    const TColgp_SequenceOfXY& Assign(const TColgp_SequenceOfXY& Other) ;
   const TColgp_SequenceOfXY& operator =(const TColgp_SequenceOfXY& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const gp_XY& T) ;
  
        void Append(TColgp_SequenceOfXY& S) ;
  
  Standard_EXPORT     void Prepend(const gp_XY& T) ;
  
        void Prepend(TColgp_SequenceOfXY& S) ;
  
        void InsertBefore(const Standard_Integer Index,const gp_XY& T) ;
  
        void InsertBefore(const Standard_Integer Index,TColgp_SequenceOfXY& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const gp_XY& T) ;
  
        void InsertAfter(const Standard_Integer Index,TColgp_SequenceOfXY& S) ;
  
  Standard_EXPORT    const gp_XY& First() const;
  
  Standard_EXPORT    const gp_XY& Last() const;
  
        void Split(const Standard_Integer Index,TColgp_SequenceOfXY& Sub) ;
  
  Standard_EXPORT    const gp_XY& Value(const Standard_Integer Index) const;
   const gp_XY& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const gp_XY& I) ;
  
  Standard_EXPORT     gp_XY& ChangeValue(const Standard_Integer Index) ;
    gp_XY& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   TColgp_SequenceOfXY(const TColgp_SequenceOfXY& Other);




};

#define SeqItem gp_XY
#define SeqItem_hxx <gp_XY.hxx>
#define TCollection_SequenceNode TColgp_SequenceNodeOfSequenceOfXY
#define TCollection_SequenceNode_hxx <TColgp_SequenceNodeOfSequenceOfXY.hxx>
#define Handle_TCollection_SequenceNode Handle_TColgp_SequenceNodeOfSequenceOfXY
#define TCollection_SequenceNode_Type_() TColgp_SequenceNodeOfSequenceOfXY_Type_()
#define TCollection_Sequence TColgp_SequenceOfXY
#define TCollection_Sequence_hxx <TColgp_SequenceOfXY.hxx>

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
