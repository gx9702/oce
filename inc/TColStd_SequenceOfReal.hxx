// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _TColStd_SequenceOfReal_HeaderFile
#define _TColStd_SequenceOfReal_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <TCollection_BaseSequence.hxx>
#include <Standard_Real.hxx>
#include <Handle_TColStd_SequenceNodeOfSequenceOfReal.hxx>
#include <Standard_Integer.hxx>
class Standard_NoSuchObject;
class Standard_OutOfRange;
class TColStd_SequenceNodeOfSequenceOfReal;



class TColStd_SequenceOfReal  : public TCollection_BaseSequence
{
public:

  DEFINE_STANDARD_ALLOC

  
    TColStd_SequenceOfReal();
  
  Standard_EXPORT TColStd_SequenceOfReal(const TColStd_SequenceOfReal& Other);
  
  Standard_EXPORT   void Clear() ;
~TColStd_SequenceOfReal()
{
  Clear();
}
  
  Standard_EXPORT  const  TColStd_SequenceOfReal& Assign (const TColStd_SequenceOfReal& Other) ;
 const  TColStd_SequenceOfReal& operator = (const TColStd_SequenceOfReal& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT   void Append (const Standard_Real& T) ;
  
      void Append (TColStd_SequenceOfReal& S) ;
  
  Standard_EXPORT   void Prepend (const Standard_Real& T) ;
  
      void Prepend (TColStd_SequenceOfReal& S) ;
  
      void InsertBefore (const Standard_Integer Index, const Standard_Real& T) ;
  
      void InsertBefore (const Standard_Integer Index, TColStd_SequenceOfReal& S) ;
  
  Standard_EXPORT   void InsertAfter (const Standard_Integer Index, const Standard_Real& T) ;
  
      void InsertAfter (const Standard_Integer Index, TColStd_SequenceOfReal& S) ;
  
  Standard_EXPORT  const  Standard_Real& First()  const;
  
  Standard_EXPORT  const  Standard_Real& Last()  const;
  
      void Split (const Standard_Integer Index, TColStd_SequenceOfReal& Sub) ;
  
  Standard_EXPORT  const  Standard_Real& Value (const Standard_Integer Index)  const;
 const  Standard_Real& operator() (const Standard_Integer Index)  const
{
  return Value(Index);
}
  
  Standard_EXPORT   void SetValue (const Standard_Integer Index, const Standard_Real& I) ;
  
  Standard_EXPORT   Standard_Real& ChangeValue (const Standard_Integer Index) ;
  Standard_Real& operator() (const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT   void Remove (const Standard_Integer Index) ;
  
  Standard_EXPORT   void Remove (const Standard_Integer FromIndex, const Standard_Integer ToIndex) ;




protected:





private:





};

#define SeqItem Standard_Real
#define SeqItem_hxx <Standard_Real.hxx>
#define TCollection_SequenceNode TColStd_SequenceNodeOfSequenceOfReal
#define TCollection_SequenceNode_hxx <TColStd_SequenceNodeOfSequenceOfReal.hxx>
#define Handle_TCollection_SequenceNode Handle_TColStd_SequenceNodeOfSequenceOfReal
#define TCollection_SequenceNode_Type_() TColStd_SequenceNodeOfSequenceOfReal_Type_()
#define TCollection_Sequence TColStd_SequenceOfReal
#define TCollection_Sequence_hxx <TColStd_SequenceOfReal.hxx>

#include <TCollection_Sequence.lxx>

#undef SeqItem
#undef SeqItem_hxx
#undef TCollection_SequenceNode
#undef TCollection_SequenceNode_hxx
#undef Handle_TCollection_SequenceNode
#undef TCollection_SequenceNode_Type_
#undef TCollection_Sequence
#undef TCollection_Sequence_hxx




#endif // _TColStd_SequenceOfReal_HeaderFile
