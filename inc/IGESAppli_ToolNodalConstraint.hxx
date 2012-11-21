// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _IGESAppli_ToolNodalConstraint_HeaderFile
#define _IGESAppli_ToolNodalConstraint_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineAlloc_HeaderFile
#include <Standard_DefineAlloc.hxx>
#endif
#ifndef _Standard_Macro_HeaderFile
#include <Standard_Macro.hxx>
#endif

#ifndef _Handle_IGESAppli_NodalConstraint_HeaderFile
#include <Handle_IGESAppli_NodalConstraint.hxx>
#endif
#ifndef _Handle_IGESData_IGESReaderData_HeaderFile
#include <Handle_IGESData_IGESReaderData.hxx>
#endif
#ifndef _Handle_Interface_Check_HeaderFile
#include <Handle_Interface_Check.hxx>
#endif
#ifndef _Handle_Message_Messenger_HeaderFile
#include <Handle_Message_Messenger.hxx>
#endif
#ifndef _Standard_Integer_HeaderFile
#include <Standard_Integer.hxx>
#endif
class Standard_DomainError;
class IGESAppli_NodalConstraint;
class IGESData_IGESReaderData;
class IGESData_ParamReader;
class IGESData_IGESWriter;
class Interface_EntityIterator;
class IGESData_DirChecker;
class Interface_ShareTool;
class Interface_Check;
class Interface_CopyTool;
class IGESData_IGESDumper;
class Message_Messenger;


//! Tool to work on a NodalConstraint. Called by various Modules <br>
//!           (ReadWriteModule, GeneralModule, SpecificModule) <br>
class IGESAppli_ToolNodalConstraint  {
public:

  DEFINE_STANDARD_ALLOC

  //! Returns a ToolNodalConstraint, ready to work <br>
  Standard_EXPORT   IGESAppli_ToolNodalConstraint();
  //! Reads own parameters from file. <PR> gives access to them, <br>
//!           <IR> detains parameter types and values <br>
  Standard_EXPORT     void ReadOwnParams(const Handle(IGESAppli_NodalConstraint)& ent,const Handle(IGESData_IGESReaderData)& IR,IGESData_ParamReader& PR) const;
  //! Writes own parameters to IGESWriter <br>
  Standard_EXPORT     void WriteOwnParams(const Handle(IGESAppli_NodalConstraint)& ent,IGESData_IGESWriter& IW) const;
  //! Lists the Entities shared by a NodalConstraint <ent>, from <br>
//!           its specific (own) parameters <br>
  Standard_EXPORT     void OwnShared(const Handle(IGESAppli_NodalConstraint)& ent,Interface_EntityIterator& iter) const;
  //! Returns specific DirChecker <br>
  Standard_EXPORT     IGESData_DirChecker DirChecker(const Handle(IGESAppli_NodalConstraint)& ent) const;
  //! Performs Specific Semantic Check <br>
  Standard_EXPORT     void OwnCheck(const Handle(IGESAppli_NodalConstraint)& ent,const Interface_ShareTool& shares,Handle(Interface_Check)& ach) const;
  //! Copies Specific Parameters <br>
  Standard_EXPORT     void OwnCopy(const Handle(IGESAppli_NodalConstraint)& entfrom,const Handle(IGESAppli_NodalConstraint)& entto,Interface_CopyTool& TC) const;
  //! Dump of Specific Parameters <br>
  Standard_EXPORT     void OwnDump(const Handle(IGESAppli_NodalConstraint)& ent,const IGESData_IGESDumper& dumper,const Handle(Message_Messenger)& S,const Standard_Integer own) const;





protected:





private:





};





// other Inline functions and methods (like "C++: function call" methods)


#endif
