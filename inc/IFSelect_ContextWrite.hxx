// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IFSelect_ContextWrite_HeaderFile
#define _IFSelect_ContextWrite_HeaderFile

#include <Standard.hxx>
#include <Standard_DefineAlloc.hxx>
#include <Standard_Macro.hxx>

#include <Handle_Interface_InterfaceModel.hxx>
#include <Handle_Interface_Protocol.hxx>
#include <TCollection_AsciiString.hxx>
#include <Handle_IFSelect_AppliedModifiers.hxx>
#include <Handle_Interface_HGraph.hxx>
#include <Interface_CheckIterator.hxx>
#include <Standard_Integer.hxx>
#include <Handle_IFSelect_GeneralModifier.hxx>
#include <Standard_CString.hxx>
#include <Standard_Boolean.hxx>
#include <Handle_Standard_Transient.hxx>
#include <Handle_Interface_Check.hxx>
class Interface_InterfaceModel;
class Interface_Protocol;
class IFSelect_AppliedModifiers;
class Interface_HGraph;
class IFSelect_GeneralModifier;
class Standard_NoSuchObject;
class Interface_Graph;
class Standard_Transient;
class Interface_Check;
class Interface_CheckIterator;


//! This class gathers various informations used by File Modifiers
//! apart from the writer object, which is specific of the norm
//! and of the physical format
//!
//! These informations are controlled by an object AppliedModifiers
//! (if it is not defined, no modification is allowed on writing)
//!
//! Furthermore, in return, ContextModif can record Checks, either
//! one for all, or one for each Entity. It supports trace too.
class IFSelect_ContextWrite 
{
public:

  DEFINE_STANDARD_ALLOC

  
  //! Prepares a ContextWrite with these informations :
  //! - the model which is to be written
  //! - the protocol to be used
  //! - the filename
  //! - an object AppliedModifiers to work. It gives a list of
  //! FileModifiers to be ran, and for each one it can give
  //! a restricted list of entities (in the model), else all
  //! the model is considered
  Standard_EXPORT IFSelect_ContextWrite(const Handle(Interface_InterfaceModel)& model, const Handle(Interface_Protocol)& proto, const Handle(IFSelect_AppliedModifiers)& applieds, const Standard_CString filename);
  
  //! Same as above but with an already computed Graph
  Standard_EXPORT IFSelect_ContextWrite(const Handle(Interface_HGraph)& hgraph, const Handle(Interface_Protocol)& proto, const Handle(IFSelect_AppliedModifiers)& applieds, const Standard_CString filename);
  
  //! Returns the Model
  Standard_EXPORT   Handle(Interface_InterfaceModel) Model()  const;
  
  //! Returns the Protocol;
  Standard_EXPORT   Handle(Interface_Protocol) Protocol()  const;
  
  //! Returns the File Name
  Standard_EXPORT   Standard_CString FileName()  const;
  
  //! Returns the object AppliedModifiers
  Standard_EXPORT   Handle(IFSelect_AppliedModifiers) AppliedModifiers()  const;
  
  //! Returns the Graph, either given when created, else created
  //! the first time it is queried
  Standard_EXPORT  const  Interface_Graph& Graph() ;
  
  //! Returns the count of recorded File Modifiers
  Standard_EXPORT   Standard_Integer NbModifiers()  const;
  
  //! Sets active the File Modifier n0 <numod>
  //! Then, it prepares the list of entities to consider, if any
  //! Returns False if <numod> out of range
  Standard_EXPORT   Standard_Boolean SetModifier (const Standard_Integer numod) ;
  
  //! Returns the currently active File Modifier. Cast to be done
  //! Null if not properly set : must be test IsNull after casting
  Standard_EXPORT   Handle(IFSelect_GeneralModifier) FileModifier()  const;
  
  //! Returns True if no modifier is currently set
  Standard_EXPORT   Standard_Boolean IsForNone()  const;
  
  //! Returns True if the current modifier is to be applied to
  //! the whole model. Else, a restricted list of selected entities
  //! is defined, it can be exploited by the File Modifier
  Standard_EXPORT   Standard_Boolean IsForAll()  const;
  
  //! Returns the total count of selected entities
  Standard_EXPORT   Standard_Integer NbEntities()  const;
  
  //! Starts an iteration on selected items. It takes into account
  //! IsForAll/IsForNone, by really iterating on all selected items.
  Standard_EXPORT   void Start() ;
  
  //! Returns True until the iteration has finished
  Standard_EXPORT   Standard_Boolean More()  const;
  
  //! Advances the iteration
  Standard_EXPORT   void Next() ;
  
  //! Returns the current selected entity in the model
  Standard_EXPORT   Handle(Standard_Transient) Value()  const;
  
  //! Adds a Check to the CheckList. If it is empty, nothing is done
  //! If it concerns an Entity from the Model (by SetEntity)
  //! to which another Check is attached, it is merged to it.
  //! Else, it is added or merged as to GlobalCheck.
  Standard_EXPORT   void AddCheck (const Handle(Interface_Check)& check) ;
  
  //! Adds a Warning Message for an Entity from the Model
  //! If <start> is not an Entity from the model (e.g. the
  //! model itself) this message is added to Global Check.
  Standard_EXPORT   void AddWarning (const Handle(Standard_Transient)& start, const Standard_CString mess, const Standard_CString orig = "") ;
  
  //! Adds a Fail Message for an Entity from the Model
  //! If <start> is not an Entity from the model (e.g. the
  //! model itself) this message is added to Global Check.
  Standard_EXPORT   void AddFail (const Handle(Standard_Transient)& start, const Standard_CString mess, const Standard_CString orig = "") ;
  
  //! Returns a Check given an Entity number (in the Model)
  //! by default a Global Check. Creates it the first time.
  //! It can then be acknowledged on the spot, in condition that the
  //! caller works by reference ("Interface_Check& check = ...")
  Standard_EXPORT   Handle(Interface_Check) CCheck (const Standard_Integer num = 0) ;
  
  //! Returns a Check attached to an Entity from the Model
  //! It can then be acknowledged on the spot, in condition that the
  //! caller works by reference ("Interface_Check& check = ...")
  Standard_EXPORT   Handle(Interface_Check) CCheck (const Handle(Standard_Transient)& start) ;
  
  //! Returns the complete CheckList
  Standard_EXPORT   Interface_CheckIterator CheckList()  const;




protected:





private:



  Handle(Interface_InterfaceModel) themodel;
  Handle(Interface_Protocol) theproto;
  TCollection_AsciiString thefile;
  Handle(IFSelect_AppliedModifiers) theapply;
  Handle(Interface_HGraph) thehgraf;
  Interface_CheckIterator thecheck;
  Standard_Integer thenumod;
  Standard_Integer thenbent;
  Standard_Integer thecurr;
  Handle(IFSelect_GeneralModifier) themodif;


};







#endif // _IFSelect_ContextWrite_HeaderFile
