// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _Interface_SequenceOfCheck_HeaderFile
#define _Interface_SequenceOfCheck_HeaderFile

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
#ifndef _Handle_Interface_Check_HeaderFile
#include <Handle_Interface_Check.hxx>
#endif
#ifndef _Handle_Interface_SequenceNodeOfSequenceOfCheck_HeaderFile
#include <Handle_Interface_SequenceNodeOfSequenceOfCheck.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class Interface_Check;
class Interface_SequenceNodeOfSequenceOfCheck;



class Interface_SequenceOfCheck  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      Interface_SequenceOfCheck();
  
  Standard_EXPORT     void Clear() ;
~Interface_SequenceOfCheck()
{
  Clear();
}
  
  Standard_EXPORT    const Interface_SequenceOfCheck& Assign(const Interface_SequenceOfCheck& Other) ;
   const Interface_SequenceOfCheck& operator =(const Interface_SequenceOfCheck& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(Interface_Check)& T) ;
  
        void Append(Interface_SequenceOfCheck& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(Interface_Check)& T) ;
  
        void Prepend(Interface_SequenceOfCheck& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(Interface_Check)& T) ;
  
        void InsertBefore(const Standard_Integer Index,Interface_SequenceOfCheck& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(Interface_Check)& T) ;
  
        void InsertAfter(const Standard_Integer Index,Interface_SequenceOfCheck& S) ;
  
  Standard_EXPORT    const Handle_Interface_Check& First() const;
  
  Standard_EXPORT    const Handle_Interface_Check& Last() const;
  
        void Split(const Standard_Integer Index,Interface_SequenceOfCheck& Sub) ;
  
  Standard_EXPORT    const Handle_Interface_Check& Value(const Standard_Integer Index) const;
   const Handle_Interface_Check& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(Interface_Check)& I) ;
  
  Standard_EXPORT     Handle_Interface_Check& ChangeValue(const Standard_Integer Index) ;
    Handle_Interface_Check& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   Interface_SequenceOfCheck(const Interface_SequenceOfCheck& Other);




};

#define SeqItem Handle_Interface_Check
#define SeqItem_hxx <Interface_Check.hxx>
#define TCollection_SequenceNode Interface_SequenceNodeOfSequenceOfCheck
#define TCollection_SequenceNode_hxx <Interface_SequenceNodeOfSequenceOfCheck.hxx>
#define Handle_TCollection_SequenceNode Handle_Interface_SequenceNodeOfSequenceOfCheck
#define TCollection_SequenceNode_Type_() Interface_SequenceNodeOfSequenceOfCheck_Type_()
#define TCollection_Sequence Interface_SequenceOfCheck
#define TCollection_Sequence_hxx <Interface_SequenceOfCheck.hxx>

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
