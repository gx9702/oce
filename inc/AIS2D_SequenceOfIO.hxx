// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _AIS2D_SequenceOfIO_HeaderFile
#define _AIS2D_SequenceOfIO_HeaderFile

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
#ifndef _Handle_AIS2D_InteractiveObject_HeaderFile
#include <Handle_AIS2D_InteractiveObject.hxx>
#endif
#ifndef _Handle_AIS2D_SequenceNodeOfSequenceOfIO_HeaderFile
#include <Handle_AIS2D_SequenceNodeOfSequenceOfIO.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_NoSuchObject;
class Standard_OutOfRange;
class AIS2D_InteractiveObject;
class AIS2D_SequenceNodeOfSequenceOfIO;



class AIS2D_SequenceOfIO  : public TCollection_BaseSequence {
public:

  DEFINE_STANDARD_ALLOC

  
      AIS2D_SequenceOfIO();
  
  Standard_EXPORT     void Clear() ;
~AIS2D_SequenceOfIO()
{
  Clear();
}
  
  Standard_EXPORT    const AIS2D_SequenceOfIO& Assign(const AIS2D_SequenceOfIO& Other) ;
   const AIS2D_SequenceOfIO& operator =(const AIS2D_SequenceOfIO& Other) 
{
  return Assign(Other);
}
  
  Standard_EXPORT     void Append(const Handle(AIS2D_InteractiveObject)& T) ;
  
        void Append(AIS2D_SequenceOfIO& S) ;
  
  Standard_EXPORT     void Prepend(const Handle(AIS2D_InteractiveObject)& T) ;
  
        void Prepend(AIS2D_SequenceOfIO& S) ;
  
        void InsertBefore(const Standard_Integer Index,const Handle(AIS2D_InteractiveObject)& T) ;
  
        void InsertBefore(const Standard_Integer Index,AIS2D_SequenceOfIO& S) ;
  
  Standard_EXPORT     void InsertAfter(const Standard_Integer Index,const Handle(AIS2D_InteractiveObject)& T) ;
  
        void InsertAfter(const Standard_Integer Index,AIS2D_SequenceOfIO& S) ;
  
  Standard_EXPORT    const Handle_AIS2D_InteractiveObject& First() const;
  
  Standard_EXPORT    const Handle_AIS2D_InteractiveObject& Last() const;
  
        void Split(const Standard_Integer Index,AIS2D_SequenceOfIO& Sub) ;
  
  Standard_EXPORT    const Handle_AIS2D_InteractiveObject& Value(const Standard_Integer Index) const;
   const Handle_AIS2D_InteractiveObject& operator()(const Standard_Integer Index) const
{
  return Value(Index);
}
  
  Standard_EXPORT     void SetValue(const Standard_Integer Index,const Handle(AIS2D_InteractiveObject)& I) ;
  
  Standard_EXPORT     Handle_AIS2D_InteractiveObject& ChangeValue(const Standard_Integer Index) ;
    Handle_AIS2D_InteractiveObject& operator()(const Standard_Integer Index) 
{
  return ChangeValue(Index);
}
  
  Standard_EXPORT     void Remove(const Standard_Integer Index) ;
  
  Standard_EXPORT     void Remove(const Standard_Integer FromIndex,const Standard_Integer ToIndex) ;





protected:





private:

  
  Standard_EXPORT   AIS2D_SequenceOfIO(const AIS2D_SequenceOfIO& Other);




};

#define SeqItem Handle_AIS2D_InteractiveObject
#define SeqItem_hxx <AIS2D_InteractiveObject.hxx>
#define TCollection_SequenceNode AIS2D_SequenceNodeOfSequenceOfIO
#define TCollection_SequenceNode_hxx <AIS2D_SequenceNodeOfSequenceOfIO.hxx>
#define Handle_TCollection_SequenceNode Handle_AIS2D_SequenceNodeOfSequenceOfIO
#define TCollection_SequenceNode_Type_() AIS2D_SequenceNodeOfSequenceOfIO_Type_()
#define TCollection_Sequence AIS2D_SequenceOfIO
#define TCollection_Sequence_hxx <AIS2D_SequenceOfIO.hxx>

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
