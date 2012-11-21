// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _ExprIntrp_SequenceOfNamedExpression_HeaderFile
#define _ExprIntrp_SequenceOfNamedExpression_HeaderFile

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
#ifndef _Handle_Expr_NamedExpression_HeaderFile
#include <Handle_Expr_NamedExpression.hxx>
#endif
#ifndef _Handle_ExprIntrp_SequenceNodeOfSequenceOfNamedExpression_HeaderFile
#include <Handle_ExprIntrp_SequenceNodeOfSequenceOfNamedExpression.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Expr_NamedExpression;
class ExprIntrp_SequenceNodeOfSequenceOfNamedExpression;



class ExprIntrp_SequenceOfNamedExpression  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      ExprIntrp_SequenceOfNamedExpression();
  
  Standard_EXPORT     void Clear() ;
~ExprIntrp_SequenceOfNamedExpression()
{
  Clear();
}
  
  Standard_EXPORT    const ExprIntrp_SequenceOfNamedExpression& Assign(const ExprIntrp_SequenceOfNamedExpression& Other) ;
   const ExprIntrp_SequenceOfNamedExpression& operator =(const ExprIntrp_SequenceOfNamedExpression& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(Expr_NamedExpression)& T) ;
  
        void Append(ExprIntrp_SequenceOfNamedExpression& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(Expr_NamedExpression)& T) ;
  
        void Prepend(ExprIntrp_SequenceOfNamedExpression& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(Expr_NamedExpression)& T) ;
  
        void InsertBefore(const Standard_Integer Index,ExprIntrp_SequenceOfNamedExpression& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(Expr_NamedExpression)& T) ;
  
        void InsertAfter(const Standard_Integer Index,ExprIntrp_SequenceOfNamedExpression& S) ;
  
  Standard_EXPORT    const Handle_Expr_NamedExpression& First() const;
  
  Standard_EXPORT    const Handle_Expr_NamedExpression& Last() const;
  
        void Split(const Standard_Integer Index,ExprIntrp_SequenceOfNamedExpression& Sub) ;
  
  Standard_EXPORT    const Handle_Expr_NamedExpression& Value(const Standard_Integer Index) const;
   const Handle_Expr_NamedExpression& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(Expr_NamedExpression)& I) ;
  
  Standard_EXPORT     Handle_Expr_NamedExpression& ChangeValue(const Standard_Integer Index) ;
    Handle_Expr_NamedExpression& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   ExprIntrp_SequenceOfNamedExpression(const ExprIntrp_SequenceOfNamedExpression& Other);




};

#define SeqItem Handle_Expr_NamedExpression
#define SeqItem_hxx <Expr_NamedExpression.hxx>
#define TCollection_SequenceNode ExprIntrp_SequenceNodeOfSequenceOfNamedExpression
#define TCollection_SequenceNode_hxx <ExprIntrp_SequenceNodeOfSequenceOfNamedExpression.hxx>
#define Handle_TCollection_SequenceNode Handle_ExprIntrp_SequenceNodeOfSequenceOfNamedExpression
#define TCollection_SequenceNode_Type_() ExprIntrp_SequenceNodeOfSequenceOfNamedExpression_Type_()
#define TCollection_Sequence ExprIntrp_SequenceOfNamedExpression
#define TCollection_Sequence_hxx <ExprIntrp_SequenceOfNamedExpression.hxx>

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
