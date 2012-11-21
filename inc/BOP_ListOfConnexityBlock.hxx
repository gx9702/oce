// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _BOP_ListOfConnexityBlock_HeaderFile
#define _BOP_ListOfConnexityBlock_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Standard_Address_HeaderFile
#include <Standard_Address.hxx>
#endif
#ifndef _Handle_BOP_ListNodeOfListOfConnexityBlock_HeaderFile
#include <Handle_BOP_ListNodeOfListOfConnexityBlock.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
#ifndef _Standard_Boolean_HeaderFile
#include <Standard_Boolean.hxx>
#endif
class Standard_NoSuchObject;
class BOP_ListIteratorOfListOfConnexityBlock;
class BOP_ConnexityBlock;
class BOP_ListNodeOfListOfConnexityBlock;



class BOP_ListOfConnexityBlock  {
public:

  DEFINE_STANDARD_ALLOC

  
  Standard_EXPORT   BOP_ListOfConnexityBlock();
  
  Standard_EXPORT     void Assign(const BOP_ListOfConnexityBlock& Other) ;
    void operator=(const BOP_ListOfConnexityBlock& Other) 
{
  Assign(Other);
}
  
  Standard_EXPORT     Standard_Integer Extent() const;
  
  Standard_EXPORT     void Clear() ;
~BOP_ListOfConnexityBlock()
{
  Clear();
}
  
        Standard_Boolean IsEmpty() const;
  
  Standard_EXPORT     void Prepend(const BOP_ConnexityBlock& I) ;
  
  Standard_EXPORT     void Prepend(const BOP_ConnexityBlock& I,BOP_ListIteratorOfListOfConnexityBlock& theIt) ;
  
  Standard_EXPORT     void Prepend(BOP_ListOfConnexityBlock& Other) ;
  
  Standard_EXPORT     void Append(const BOP_ConnexityBlock& I) ;
  
  Standard_EXPORT     void Append(const BOP_ConnexityBlock& I,BOP_ListIteratorOfListOfConnexityBlock& theIt) ;
  
  Standard_EXPORT     void Append(BOP_ListOfConnexityBlock& Other) ;
  
  Standard_EXPORT     BOP_ConnexityBlock& First() const;
  
  Standard_EXPORT     BOP_ConnexityBlock& Last() const;
  
  Standard_EXPORT     void RemoveFirst() ;
  
  Standard_EXPORT     void Remove(BOP_ListIteratorOfListOfConnexityBlock& It) ;
  
  Standard_EXPORT     void InsertBefore(const BOP_ConnexityBlock& I,BOP_ListIteratorOfListOfConnexityBlock& It) ;
  
  Standard_EXPORT     void InsertBefore(BOP_ListOfConnexityBlock& Other,BOP_ListIteratorOfListOfConnexityBlock& It) ;
  
  Standard_EXPORT     void InsertAfter(const BOP_ConnexityBlock& I,BOP_ListIteratorOfListOfConnexityBlock& It) ;
  
  Standard_EXPORT     void InsertAfter(BOP_ListOfConnexityBlock& Other,BOP_ListIteratorOfListOfConnexityBlock& It) ;


friend class BOP_ListIteratorOfListOfConnexityBlock;



protected:





private:

  
  Standard_EXPORT   BOP_ListOfConnexityBlock(const BOP_ListOfConnexityBlock& Other);


Standard_Address myFirst;
Standard_Address myLast;


};

#define Item BOP_ConnexityBlock
#define Item_hxx <BOP_ConnexityBlock.hxx>
#define TCollection_ListNode BOP_ListNodeOfListOfConnexityBlock
#define TCollection_ListNode_hxx <BOP_ListNodeOfListOfConnexityBlock.hxx>
#define TCollection_ListIterator BOP_ListIteratorOfListOfConnexityBlock
#define TCollection_ListIterator_hxx <BOP_ListIteratorOfListOfConnexityBlock.hxx>
#define Handle_TCollection_ListNode Handle_BOP_ListNodeOfListOfConnexityBlock
#define TCollection_ListNode_Type_() BOP_ListNodeOfListOfConnexityBlock_Type_()
#define TCollection_List BOP_ListOfConnexityBlock
#define TCollection_List_hxx <BOP_ListOfConnexityBlock.hxx>

#include <TCollection_List.lxx>

#undef Item
#undef Item_hxx
#undef TCollection_ListNode
#undef TCollection_ListNode_hxx
#undef TCollection_ListIterator
#undef TCollection_ListIterator_hxx
#undef Handle_TCollection_ListNode
#undef TCollection_ListNode_Type_
#undef TCollection_List
#undef TCollection_List_hxx


// other Inline functions and methods (like "C++: function call" methods)


#endif
